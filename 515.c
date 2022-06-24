#include <stdio.h>

struct date
{
    int d, m, y;
};

int isgreater(struct date, struct date);

int main()
{
    struct employee
    {
        int empcode[6];
        char empname[20];
        struct date join_date;
        float salary;
    };
    struct employee emp[100], s, temp;
    int j, k;
    FILE *fs, *ft;
    int n;
    fs = fopen("EMP.DAT", "rb");
    if (fs == NULL)
    {
        puts("Cannot open file: EMP.DAT\n");
        exit(1);
    }
    ft = fopen("ASCEMP.DAT", "wb");
    if (ft == NULL)
    {
        puts("Cannot open file: ASCEMP.DAT\n");
        fclose(fs);
        exit(2);
    }
    n = 0;
    while (fread(&s, sizeof(s), 1, fs) == 1)
    {
        emp[n] = s;
        n++;
    }
    for (j = 0; j < n - 1; j++)
    {
        for (k = j + 1; k < n; k++)
        {
            if (isgreater(emp[j].join_date, emp[k].join_date))
            {
                temp = emp[j];
                emp[j] = emp[k];
                emp[k] = temp;
            }
        }
    }
    for (j = 0; j < n; j++)
        fwrite(&emp[j], sizeof(s), 1, ft);
    fclose(fs);
    fclose(ft);
    printf("Records arranged in ascending order\n");
    return 0;
}

int isgreater(struct date d1, struct date d2)
{
    if (d1.y > d2.y)
        return (1);
    else
    {
        if (d1.y == d2.y)
        {
            if (d1.m > d2.m)
                return (1);
            else
            {
                if ((d1.m == d2.m) && (d1.d >= d2.d))
                    return (1);
            }
        }
    }

    return 0;
}
