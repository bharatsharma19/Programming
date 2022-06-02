#include <stdio.h>
#include <math.h>

float numerator(float, int);
float denominator(int);

int main()
{
    int i, j;
    float n, x, a, b, sum = 0;

    printf("Enter the number, x = ");
    scanf("%f", &x);

    for (i = 1, j = 1; i <= 10; i++, j += 2)
    {
        a = numerator(x, j);
        b = denominator(j);

        n = a / b;

        (i % 2 == 0) ? sum = sum - n : (sum = sum + n);
    }
    printf("Sum = %f\n", sum);

    return 0;
}

float numerator(float y, int j)
{
    float k = 1;
    int m;

    for (m = 1; m <= j; m++)
    {
        k *= y;
    }

    return (k);
}

float denominator(int j)
{
    int m;
    float h = 1;

    for (m = 1; m <= j; m++)
    {
        h = h * m;
    }

    return (h);
}
