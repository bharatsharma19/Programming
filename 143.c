#include <stdio.h>
int main()
{
    int a, b, c, g;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    g = a > b ? (a > c ? a : c) : (b > c ? b : c);

    printf("Greatest number is %d", g);

    return 0;
}
