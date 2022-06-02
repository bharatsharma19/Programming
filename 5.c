#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, sp, area;
    printf("Enter Sides of Triangle : ");
    scanf("%f %f %f", &a, &b, &c);
    sp = (a + b + c) / 2;
    area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
    printf("Area of triangle is %f", area);
    return 0;
}
