#include <stdio.h>

int getSum(int);

int main()
{
    int s;

    s = getSum(0);

    printf("Sum of first 25 natural number is %d", s);

    return 0;
}

int getSum(int n)
{
    int sum = 0;

    if (n == 100)
    {
        return sum;
    }

    sum = n + getSum(++n);

    return (sum);
}
