#include <stdio.h>

int main()
{
    int arr[3][3], i, j, count = 0;

    printf("\nEnter the elements of the matrix\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            if (arr[i][j] == arr[j][i])
            {
                count++;
            }
        }
    }

    if (count == 6)
    {
        printf("Matrix is symmetric\n");
    }
    else
    {
        printf("Matrix is not symmetric\n");
    }

    return 0;
}
