#include <stdio.h>

int main()
{
    int arr[25], i, n;
    printf("Enter 25 elements of an array\n");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }

    n = *arr;

    for (i = 0; i < 25; i++)
    {
        if (*(arr + i) < n)
        {
            n = *(arr + i);
        }
    }

    printf("Smallest Number = %d\n", n);

    return 0;
}
