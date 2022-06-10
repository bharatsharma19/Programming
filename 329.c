#include <stdio.h>

int main()
{
    int a[25], i, j, t;

    printf("Enter 25 elements : ");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 24; i++)
    {
        for (j = i + 1; j < 25; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
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
