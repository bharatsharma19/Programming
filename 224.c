#include <stdio.h>

long power(int, int);

int main()
{
    int x, y;
    long pow;

    printf("Enter number : ");
    scanf("%d", &x);
    printf("Enter power : ");
    scanf("%d", &y);

    pow = power(x, y);

    printf("%d to the power %d is %d", x, y, pow);

    return 0;
}

long power(int x, int y)
{
    int i;
    long p = 1;

    for (int i = 1; i <= y; i++)
    {
        p = p * x;
    }

    return (p);
}
