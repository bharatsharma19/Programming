#include <stdio.h>
#include "areaperi.h"

int main()
{
    int d, a, b;
    float sid1, sid2, sid3, sid, p_tri, p_cir, p_sqr, a_tri, a_cir, a_sqr;
    float r, base, height;

    printf("Enter radius of circle : ");
    scanf("%f", &r);
    p_cir = PERIC(r);
    printf("Circumferance of Circle = %f\n", p_cir);
    a_cir = AREAC(r);
    printf("Area of circle = %f\n", a_cir);

    printf("Enter side of square : ");
    scanf("%f", &sid);
    p_sqr = PERIS(sid);
    printf("Perimeter of square = %f\n", p_sqr);
    a_sqr = AREAS(sid);
    printf("Area of square = %f\n", a_sqr);

    printf("Enter three sides of triangle : ");
    scanf("%f%f%f", &sid1, &sid2, &sid3);
    p_tri = PERIT(sid1, sid2, sid3);
    printf("Perimeter of triangle = %f\n", p_tri);
    printf("Enter base and height of triangle : ");
    scanf("%f%f", &base, &height);
    a_tri = AREAT(base, height);
    printf("Area of triangle = %f\n", a_tri);

    return 0;
}
