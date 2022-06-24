#include <stdio.h>

int main()
{
    struct employee
    {
        int empno;
        char name[20];
        char sex;
        float gs;
    } emp;
    FILE *fp;
    char another;
    int delno, flag, choice;
    float newgs;
    long sz = sizeof(struct employee);
    fp = fopen("emp.dat", "rb+"); /* binary read / modify mode */
    if (fp == NULL)
    {
        fp = fopen("emp.dat", "wb+"); /* binary write / modify mode */
        if (fp == NULL)
        {
            puts("Unable to open file\n");
            exit(1);
        }
    }
    /* display Menu */
    while (1)
    {
        printf("1. Add\n");
        printf("2. Delete\n");
        printf("3. Update\n");
        printf("4. List\n");
        printf("0. Exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) /* take action based on choice */
        {
        case 1:
            printf("\nEnter employee's number, name, sex and gross salary: ");
            scanf("%d %s %c %f", &emp.empno, emp.name,
                  &emp.sex, &emp.gs);
            fwrite(&emp, sz, 1, fp); /* write new record to file */
            break;
        case 2:
            printf("\nEnter employee number: ");
            scanf("%d", &delno);
            flag = 1;
            fseek(fp, 0L, SEEK_SET);
            while (fread(&emp, sz, 1, fp) == 1)
            {
                if (emp.empno == delno)
                {
                    emp.gs = flag = 0; /* employee deleted */
                    fseek(fp, -sz, SEEK_CUR);
                    fwrite(&emp, sz, 1, fp); /* modify file */
                    break;
                }
            }
            if (flag)
                puts("No such employee number exists.\n");
            break;
        case 3:
            printf("\nEnter employee number & gross salary: ");
            scanf("%d %f", &delno, &newgs);
            flag = 1;
            fseek(fp, 0L, SEEK_SET);
            while (fread(&emp, sizeof(emp), 1, fp) == 1)
            {
                if (emp.empno == delno)
                {
                    flag = 0;
                    emp.gs = newgs;
                    fseek(fp, -sz, SEEK_CUR);
                    fwrite(&emp, sz, 1, fp);
                    break;
                }
            }
            if (flag)
                puts("No such employee number exists.\n");
            break;
        case 4:
            fseek(fp, 0L, SEEK_SET); /* List records from
        begining */
            while (fread(&emp, sizeof(emp), 1, fp) == 1)
                printf("%d %s %c %f\n", emp.empno,
                       emp.name, emp.sex, emp.gs);
            break;
        case 0:
            fclose(fp);
            exit(0);
            break;
        }
    }
    
    return 0;
}
