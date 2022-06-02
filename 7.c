#include <stdio.h>
int main()
{
    float bs, da, hra, grpay;
    printf("Enter Basic Salary : ");
    scanf("%f", &bs);
    da = 0.4 * bs;
    hra = 0.2 * bs;
    grpay = bs + da + hra;
    printf("\nNow...\n");
    printf("Basic Salary : %f\n", bs);
    printf("Dearness Allowance : %f\n", da);
    printf("House Rent Allowance : %f\n", hra);
    printf("Gross Pay : %f\n", grpay);
    return 0;
}
