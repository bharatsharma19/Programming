#include <stdio.h>
#include <math.h>
int main()
{
    float l1, l2, g1, g2, d;
    printf("Enter the latitude(L1,L2) : ");
    scanf("%f %f", &l1, &l2);
    printf("Enter the longitude(G1,G2) : ");
    scanf("%f %f", &g1, &g2);

    l1 = l1 * 3.14 / 180;
    l2 = l2 * 3.14 / 180;
    g1 = g1 * 3.14 / 180;
    g2 = g2 * 3.14 / 180;

    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
    printf("Distance between (%f , %f) and (%f , %f) is %f", l1, l2, g1, g2, d);

    return 0;
}
