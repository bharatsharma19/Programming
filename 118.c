#include <stdio.h>
int main()
{
    float cp, sp, p, l;
    printf("Enter cost price : ");
    scanf("%f", &cp);
    printf("Enter selling price : ");
    scanf("%f", &sp);
    p = sp - cp;
    l = cp - sp;

    if (p > 0)
        printf("Seller made a profit of Rs. %f\n", p);
    if (l > 0)
        printf("Seller made a loss of Rs. %f\n", l);
    if (p == 0)
        printf("No loss,No profit\n");

    return 0;
}
