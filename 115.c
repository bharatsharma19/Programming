#include <stdio.h>
int main()
{
    int c, d, temp;

    printf("Enter C : ");
    scanf("%d", &c);
    printf("Enter D : ");
    scanf("%d", &d);

    temp = d;
    d = c;
    c = temp;

    printf("Now , Value of C and D are %d and %d", c, d);

    return 0;
}
