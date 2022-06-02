#include <stdio.h>
int main()
{
    int y;
    printf("Enter year : ");
    scanf("%d", &y);

    y % 100 == 0 ? (y % 400 == 0 ? printf("Leap year\n") : printf("Not a leap year\n")) : (y % 4 == 0 ? printf("Leap year\n") : printf("Not a leap year\n"));

    return 0;
}
