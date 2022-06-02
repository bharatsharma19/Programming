#include <stdio.h>
int main()
{
    float rate, total;
    int qty, dis;

    printf("Enter Quantity : ");
    scanf("%d", &qty);
    printf("Enter rate : ");
    scanf("%f", &rate);

    if (qty > 1000)
        dis = 10;
    else
        dis = 0;

    total = (qty * rate) - (qty * rate * dis / 100);

    printf("Total expenses : Rs. %f\n", total);

    return 0;
}
