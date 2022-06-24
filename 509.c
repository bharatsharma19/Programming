#include <stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    struct stud
    {
        char name[40];
        int age;
    };
    struct stud s, stud[10], temp;
    int n, j, k, ii;
    fp = fopen("STUDENT.DAT", "rb");
    n = 0;
    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        stud[n] = s;
        n++;
    }
    for (j = 0; j < n - 1; j++)
    {
        for (k = j + 1; k < n; k++)
        {
            if (strcmp(stud[j].name, stud[k].name) > 0)
            {
                temp = stud[j];
                stud[j] = stud[k];
                stud[k] = temp;
            }
        }
    }

    fclose(fp);
    for (j = 0; j < n; j++)
        printf("Name: %s , age: %d\n", stud[j].name, stud[j].age);

    return 0;
}
