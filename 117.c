#include <stdio.h>
int main()
{
    float bs, da, hra, gp;

    printf("Enter Basic Salary : ");
    scanf("%f", &bs);
    if (bs > 1500)
    {
        hra = bs * 10 / 100;
        da = bs * 90 / 100;
    }
    else
    {
        hra = 500;
        da = bs * 98 / 100;
    }

    gp = bs + hra + da;

    printf("Gross Pay = Rs. %f", gp);

    return 0;
}
