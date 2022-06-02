#include <stdio.h>
#include <math.h>

float area(float a, float b, float c);

int main()
{
    float a, b, c, z;

    printf("Enter sides of triangle\n");
    scanf("%f %f %f", &a, &b, &c);

    z = area(a, b, c);

    printf("Area of triangle = %f\n", z);

    return 0;
}

float area(float a, float b, float c)
{
    float s, m, x;
    s = (a + b + c) / 2;

    m = s * (s - a) * (s - b) * (s - c);

    x = sqrt(m);

    return (x);
}
