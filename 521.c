#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *mf;
    struct employee
    {
        int empno;
        char name[30];
        int basic, grade;
    };
    struct employee emp;
    int i, msz = sizeof(struct employee);
    system("cls");
    mf = fopen("employee.dat", "w");
    if (mf == NULL)
    {
        puts("Unable to open file\n");
        exit(1);
    }
    printf("\nEnter Values :");
    for (i = 0; i <= 5; i++)
    {
        printf("\nEmployee No.: ");
        scanf("%d", &emp.empno);
        fflush(stdin);
        printf("\nName: ");
        scanf("%s", &emp.name);
        fflush(stdin);
        printf("\nBasic: ");
        scanf("%d", &emp.basic);
        printf("\nGrade: ");
        scanf("%d", &emp.grade);
        fflush(stdin);
        fwrite(&emp, msz, 1, mf);
    }
    fcloseall();
    printf("\nFile employee.dat has been created\n");

    return 0;
}
