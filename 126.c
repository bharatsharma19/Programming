#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    float s1, s2, s3;

    printf("Enter co-ordinates of first point : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter co-ordinates of second point : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter co-ordinates of third point : ");
    scanf("%d %d", &x3, &y3);

    s1 = abs(x2 - x1) / abs(y2 - y1);
    s2 = abs(x3 - x2) / abs(y3 - y2);
    s3 = abs(x1 - x3) / abs(y1 - y3);

    if ((s1 == s2) && (s2 == s3))
    {
        printf("Points are co-linear\n");
    }
    else
    {
        printf("Points are not co-linear\n");
    }

    return 0;
}
