#include <stdio.h>
int main()
{
    float dk, dm, df, di, dcm;
    printf("Enter Distance b/w two cities in Kilo-Meter : ");
    scanf("%f", &dk);
    dm = dk * 1000;
    dcm = dm * 100;
    di = dcm / 2.54;
    df = di / 12;
    printf("\nNow...\n");
    printf("Distance in KM : %f\n", dk);
    printf("Distance in Meter : %f\n", dm);
    printf("Distance in CM : %f\n", dcm);
    printf("Distance in Feet : %f\n", df);
    printf("Distance in inch : %f\n", di);
    return 0;
}