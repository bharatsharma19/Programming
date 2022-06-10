#include <stdio.h>

void swap(int *p)
{
    int k, i, tt, t, j;

    for (k = 0; k < 4; k++)
    {
        for (i = 0; i < 2; i++)
        {
            t = *(p + k * 5 + 0);

            for (j = 0; j < 4; j++)
            {
                tt = *(p + k * 5 + j);

                *(p + k * 5 + j) = *(p + k * 5 + j + 1);

                *(p + k * 5 + j + 1) = tt;
            }
            *(p + k * 5 + j) = t;
        }
    }
}

int main()
{
    int p[4][5], i, j;

    for (i = 0; i < 4; i++)
    {
        printf("\nEnter the %d row elements\n", i);

        for (j = 0; j < 5; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }

    printf("\nEntered Matrix\n");
    for (i = 0; i < 4; i++)
    {
        printf("The %d row elements\n", i);

        for (j = 0; j < 5; j++)
        {
            printf("\t%d", p[i][j]);
        }
        printf("\n");
    }

    swap(p);

    printf("Matrix after left shifting row elements\n");
    for (i = 0; i < 4; i++)
    {
        printf("\nThe %d row elements\n", i);

        for (j = 0; j < 5; j++)
        {
            printf("\t%d", p[i][j]);
        }
    }

    return 0;
}
