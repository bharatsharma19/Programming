#include <stdio.h>
int main()
{
    int p, n, count;
    float r, si, total_amount;
    count = 1;
    while (count <= 3)
    {
        printf("Enter the value of p,n and r\n");
        scanf("%d %d %f", &p, &n, &r);
        si = p * n * r / 100;
        printf("Simple Interest = Rs. %f\n", si);
        total_amount = p + si;
        printf("Total amount is Rs. %f\n", total_amount);
        count++;
    }

    return 0;
}
