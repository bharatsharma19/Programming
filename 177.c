#include <stdio.h>
#include <math.h>
int main()
{
    float q, r, n, p, a;
    int i;
    for (i = 1; i < 10; i++)
    {
        printf("Enter the principal amount : ");
        scanf("%f", &p);
        printf("Rate of Interest : ");
        scanf("%f", &r);
        printf("Years : ");
        scanf("%f", &n);
        printf("Enter the compounding period : ");
        scanf("%f", &q);

        a = p + pow((1 + r / q), (n * q));

        printf("Total amount = Rs. %f\n", a);
    }

    return 0;
}
