#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter first angle : ");
    scanf("%f", &a);
    printf("Enter second angle : ");
    scanf("%f", &b);
    printf("Enter third angle : ");
    scanf("%f", &c);

    if ((a + b + c) == 180)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Not a valid triangle\n");
    }

    return 0;
}
