#include <stdio.h>
int main()
{
    float r, d, dis;
    int x, y;

    printf("Enter co-ordinates of point : ");
    scanf("%d %d", &x, &y);
    printf("Enter radius : ");
    scanf("%f", &r);

    dis = x * x + y * y;
    d = r * r;

    if (dis == d)
    {
        printf("Point is on Circle\n");
    }
    else
    {
        if (dis > d)
        {
            printf("Point is outside the circle\n");
        }
        else
        {
            printf("Point is inside the circle\n");
        }
    }

    return 0;
}
