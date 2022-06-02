#include <stdio.h>
#include <math.h>
int main()
{
    float l, b, a, p;
    printf("Enter length of rectangle : ");
    scanf("%f", &l);

    printf("Enter Width of rectangle : ");
    scanf("%f", &b);

    a = l * b;
    p = 2 * l + 2 * b;

    if (a > p)
        printf("Area is %f and it is greater than perimeter(%f)", a, p);
    else
        printf("Area is smaller than perimeter\n");

    return 0;
}
