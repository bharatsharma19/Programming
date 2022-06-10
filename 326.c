#include <stdio.h>

int main()
{
    int arr[10], i, j;
    printf("\nEnter 10 elements of an array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n\n");
    for (i = 0; i < 10; i++)
    {
        if (arr[i] = arr[10 - (i + 1)])
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
