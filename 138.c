#include <stdio.h>
#include <stdlib.h>
int main()
{
    float h, c, t;

    printf("Enter hardness,carbon and tensile strength\n");
    scanf("%f %f %f", &h, &c, &t);

    if (h > 50 && c < 0.7 && t > 5600)
    {
        printf("Grade 10\n");
        exit(0);
    }
    if (h > 50 && c < 0.7 && t <= 5600)
    {
        printf("Grade 9\n");
        exit(0);
    }
    if (h <= 50 && c < 0.7 && t > 5600)
    {
        printf("Grade 8\n");
        exit(0);
    }
    if (h > 50 && c >= 0.7 && t > 5600)
    {
        printf("Grade 7\n");
        exit(0);
    }

    if (h > 50 || c < 0.7 || t > 5600)
    {
        printf("Grade 6\n");
        exit(0);
    }

    printf("Grade 5\n");

    return 0;
}
