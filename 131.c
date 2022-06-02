#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    float per;

    printf("Enter your marks in all subjects\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    per = (m1 + m2 + m3 + m4 + m5) / 5;

    printf("Your percentage is %f", per);
    printf("\n");

    if (per >= 60)
        printf("First division\n");
    if ((per >= 50) && per < 60)
        printf("Second division\n");
    if ((per >= 33) && per < 50)
        printf("Third division\n");
    if (per < 33)
        printf("Fail\n");

    return 0;
}
