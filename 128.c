#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter co-ordinates of point : ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("Point lies on origin");
    }
    else
    {
        if (x == 0 && y != 0)
        {
            printf("Point lies on y-axis\n");
        }
        else
        {
            if (x != 0 && y == 0)
            {
                printf("Point lies on x-axis\n");
            }
            else
            {
                printf("Point neither lies on x,y-axis nor origin\n");
            }
        }
    }

    return 0;
}
