#include <stdio.h>
int main()
{
    int a, b, c, ls, sum;
    printf("Enter sides of triangle\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            sum = b + c;
            ls = a;
        }
        else
        {
            sum = a + b;
            ls = c;
        }
    }
    else
    {
        if (b > c)
        {
            sum = a + c;
            ls = b;
        }
        else
        {
            sum = a + b;
            ls = c;
        }
    }

    if (sum > ls)
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is invalid\n");
    }

    return 0;
}
