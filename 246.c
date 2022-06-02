#include <stdio.h>

void power_fact(float, int, int, float *, int *);

int main()
{
    float a, pow;
    int b, number, factorial;

    printf("Enter a and b for calculating a raised to b\n");
    scanf("%f %d", &a, &b);
    printf("Enter number whose factorial is to be calculated : ");
    scanf("%d", &number);

    power_fact(a, b, number, &pow, &factorial);

    printf("Power = %f,Factorial = %d", pow, factorial);

    return 0;
}

void power_fact(float x, int y, int num, float *power, int *fact)
{
    float res = 1;
    int i;

    for (i = 1; i <= y; i++)
    {
        res = res * x;
    }

    *power = res;
    res = 1;

    for (i = 1; i <= num; i++)
    {
        res = res * i;
    }

    *fact = res;
}
