#include <stdio.h>
int main()
{
    int leapdays, firstday, yr;
    long int normaldays, totaldays;

    printf("Enter year : ");
    scanf("%d", &yr);

    normaldays = (yr - 1) * 365L;
    leapdays = (yr - 1) / 4 - (yr - 1) / 100 + (yr - 1) / 400;
    totaldays = normaldays + leapdays;
    firstday = totaldays % 7;

    if (firstday == 0)
        printf("Monday\n");
    if (firstday == 1)
        printf("Tuesday\n");
    if (firstday == 2)
        printf("Wednesday\n");
    if (firstday == 3)
        printf("Thursday\n");
    if (firstday == 4)
        printf("Friday\n");
    if (firstday == 5)
        printf("Saturday\n");
    if (firstday == 6)
        printf("Sunday\n");

    return 0;
}
