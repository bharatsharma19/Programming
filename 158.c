#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, rem, oct, p;

    printf("Enter any number : ");
    scanf("%d", &x);

    y = x;
    p = oct = 0;

    while (x > 0)
    {
        rem = x % 8;
        x = x / 8;
        oct = oct + rem * pow(10, p);
        p++;
    }

    printf("Octal Equivalent of %d is %d\n", y, oct);

    return 0;
}
