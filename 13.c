#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, sp, area;
    printf("Enter A : ");
    scanf("%f", &a);
    printf("Enter B : ");
    scanf("%f", &b);
    printf("Enter C : ");
    scanf("%f", &c);
    sp = (a + b + c) / 2;
    area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
    printf("\nArea of Triangle is %f\n\n", area);
    return 0;
}
