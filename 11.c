#include <stdio.h>
int main()
{
    float len, br, r, p, ar, c, ac;
    printf("Enter length of Rectangle : ");
    scanf("%f", &len);
    printf("Enter Width of Rectangle : ");
    scanf("%f", &br);
    p = 2 * len + 2 * br;
    ar = len * br;
    printf("Enter Radius of Circle : ");
    scanf("%f", &r);
    c = 2 * (3.141592) * r;
    ac = (3.141592) * r * r;
    printf("\nPerimeter of Rectangle is %f\n", p);
    printf("Area of Rectangle is %f\n", ar);
    printf("Circumferance of Circle is %f\n", c);
    printf("Area of Circle is %f\n\n", ac);
    return 0;
}