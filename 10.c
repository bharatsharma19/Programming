#include <stdio.h>
int main()
{
    float fah, cen;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fah);
    cen = (5.0 / 9.0) * (fah - 32);
    printf("Temperature in Centigrade is %f\n\n", cen);
    return 0;
}
