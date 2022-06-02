#include <stdio.h>
#include <math.h>
int main()
{
    float angle, s, c, t;
    printf("Enter the value of angle:");
    scanf("%f", &angle);

    s = sin(angle);
    c = cos(angle);
    t = tan(angle);

    printf("\nSin(%f) = %f", angle, s);
    printf("\nCos(%f) = %f", angle, c);
    printf("\nTan(%f) = %f", angle, t);

    return 0;
}
