#include <stdio.h>
#define MEAN(x, y) ((x + y) / 2)
#define ABS(x) (x < 0 ? x * -1 : x)
#define TOLOWER(x) (x + 32)
#define BIG(x, y, z) (x > y && x > z ? x : y > x && y > z ? y \
                                                          : z)

int main()
{
    char ch;
    float d, a, b, c;

    printf("Enter any two numbers : ");
    scanf("%f%f", &a, &b);
    d = MEAN(a, b);
    printf("Mean = %f\n", d);

    printf("Enter any number : ");
    scanf("%f", &a);
    d = ABS(a);
    printf("Absolute value is %f\n", d);

    fflush(stdin);

    printf("Enter any upper case character : ");
    scanf("%c", &ch);
    ch = TOLOWER(ch);
    printf("Lower case character is %c\n", ch);

    printf("Enter any three numbers : ");
    scanf("%f%f%f", &a, &b, &c);
    d = BIG(a, b, c);
    printf("Greatest number is %f\n", d);

    return 0;
}
