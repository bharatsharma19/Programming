#include <stdio.h>
int main()
{
    int yr;
    printf("Enter Year : ");
    scanf("%d", &yr);

    if (yr % 400 == 0 || yr % 100 != 0 && yr % 4 == 0)
    {
        printf("leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }

    return 0;
}
