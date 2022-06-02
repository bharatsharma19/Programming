#include <stdio.h>

int binary(int);

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    binary(num);

    return 0;
}

int binary(int n)
{
    int r;

    r = n % 2;
    n = n / 2;

    if (n == 0)
    {
        printf("Binary equivalent is %d", r);
        return (r);
    }
    else
    {
        binary(n);
    }

    printf("%d", r);
}
