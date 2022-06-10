#include <stdio.h>

int main()
{
    int a[25], i, j, k, t;

    printf("\nEnter 25 elements : ");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < 25; i++)
    {
        t = a[i];

        for (j = 0; j < i; j++)
        {
            if (t < a[j])
            {
                for (k = i; k >= j; k--)
                {
                    a[k] = a[k - 1];
                }
                a[j] = t;

                break;
            }
        }
    }

    printf("Sorted Numbers : ");
    for (i = 0; i < 25; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
