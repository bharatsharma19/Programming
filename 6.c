#include <stdio.h>
int main()
{
    float p, r, si, ta;
    int n;
    printf("Enter Principal Amount : ");
    scanf("%f", &p);
    printf("Rate of Interest : ");
    scanf("%f", &r);
    printf("Number of Years : ");
    scanf("%d", &n);
    si = (p * n * r) / 100;
    ta = si + p;
    printf("Simple Interest is %f\n", si);
    printf("Total Amount to return is %f\n", ta);
    return 0;
}
