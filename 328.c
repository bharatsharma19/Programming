#include <stdio.h>

int main()
{
    int i;
    static int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Original Array : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    modify(array, 10);

    printf("Modified Array : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

modify(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        *arr = *arr * 3;
        arr++;
    }
}
