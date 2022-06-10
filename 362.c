#include <stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], i, j, k, sum;

    printf("Enter elements of first (3 * 3) matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second (3 * 3) matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nMatrix 1\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;

            for (k = 0; k < 3; k++)
            {
                sum = sum + mat1[i][k] * mat2[k][j];
            }
            mat3[i][j] = sum;
        }
    }

    printf("\nResultant Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
