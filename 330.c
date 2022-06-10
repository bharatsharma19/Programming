#include <stdio.h>

int main()
{
    int a[25], i, j, m, t;

    printf("Enter 25 elements : ");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 25; i++)
    {
        for (j = 0; j < (25 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    printf("Sorted Array : ");
    for (i = 0; i < 25; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
