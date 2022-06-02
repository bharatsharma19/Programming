#include <stdio.h>
#include "interest.h"

int main()
{
    float p, n, si, amt, r;

    printf("Enter Principal Amount : ");
    scanf("%f", &p);
    printf("Enter time in years : ");
    scanf("%f", &n);
    printf("Enter rate of interest : ");
    scanf("%f", &r);

    si = SI(p, n, r);
    amt = AMT(si, p);

    printf("\nSimple Interest = %f\nAmount=%f\n", si, amt);

    return 0;
}
