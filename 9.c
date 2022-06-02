#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    float aggr, per;
    printf("Enter Marks in Physics : ");
    scanf("%d", &m1);
    printf("Enter Marks in Chemistry : ");
    scanf("%d", &m2);
    printf("Enter Marks in Mathematics : ");
    scanf("%d", &m3);
    printf("Enter Marks in Hindi : ");
    scanf("%d", &m4);
    printf("Enter Marks in English : ");
    scanf("%d", &m5);
    aggr = m1 + m2 + m3 + m4 + m5;
    per = aggr / 5;
    printf("\nYour Aggregate Marks : %f\n", aggr);
    printf("\nYour Percentage is %f\n\n", per);
    return 0;
}
