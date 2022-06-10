#include <stdio.h>

int *fun(int *num)
{
    static int arr[] = {10, 50, 20, 40, 30};

    *num = sizeof(arr) / sizeof(arr[0]);

    return arr;
}

int main()
{
    int max, *p, i;

    p = fun(&max);

    for (i = 0; i < max; i++)
    {
        printf("%d ", p[i]);
    }

    return 0;
}
