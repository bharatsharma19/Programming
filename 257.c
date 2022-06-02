#include <stdio.h>

int fun(int, int);

int main()
{
    int j, k, t, r, z;

    printf("Enter two numbers : ");
    scanf("%d %d", &j, &k);

    z = fun(j, k);
    printf("Greatest common divisor of %d and %d is %d\n", j, k, z);

    return 0;
}

int fun(int j, int k)
{
    int r = 1, m, t, n = 0;

    if (k > j)
    {
        t = j;
        j = k;
        k = t;
    }
    else
    {
        if (j = k)
        {
            return j;
        }
    }

    while (1)
    {
        r = j / k;
        m = j - (r * k);

        if (!(j % k))
        {
            n = k;
        }

        if (m == 0)
        {
            break;
        }

        j = k;
        k = m;
        n = m;
    }

    return (n);
}
