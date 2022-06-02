#include <stdio.h>
int main()
{
    int yr;
    printf("Enter year : ");
    scanf("%d", &yr);

    if (yr % 100 == 0)
    {
        if (yr % 400 == 0)
        {
            printf("Leap Year\n");
        }
        else
        {
            printf("Not a leap year\n");
        }
    }
    else
    {
        if (yr % 4 == 0)
        {
            printf("Leap Year\n");
        }
        else
        {
            printf("Not a leap year\n");
        }
    }

    return 0;
}
