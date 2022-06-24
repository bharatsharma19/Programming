#include <stdio.h>

int main()
{
    FILE *fp;

    struct emp
    {
        char name[32];
        int age;
        float bs;
    };

    struct emp e;
    char ch = 'Y';

    fp = fopen("Employee.txt", "w");

    while (ch == 'Y')
    {
        printf("Enter name, age and salary\n");
        scanf("%s%d%f", e.name, &e.age, &e.bs);

        fprintf(fp, "%s %d %f\n", e.name, e.age, e.bs);

        printf("Another Record...\n");
        ch = fgetchar();
    }
    fclose(fp);

    fp = fopen("Employee.txt", "r");
    while (fscanf(fp, "%s%d%f", e.name, &e.age, &e.bs) != EOF)
    {
        printf("%s %d %f\n", e.name, e.age, e.bs);
    }
    fclose(fp);

    ch = 'Y';
    fp = fopen("Emp.txt", "wb");
    while (ch == 'Y')
    {
        printf("Enter name, age and salary\n");
        scanf("%s%d%f", e.name, &e.age, &e.bs);

        fwrite(&e, sizeof(e), 1, fp);
        printf("Another Record...\n");
        ch = fgetchar();
    }
    fclose(fp);

    fp = fopen("Emp.txt", "rb");
    while (fread(&e, sizeof(e), 1, fp) == 1)
    {
        printf("%s %d %f\n", e.name, e.age, e.bs);
    }
    fclose(fp);

    return 0;
}
