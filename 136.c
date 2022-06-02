#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;

    printf("Enter sides of triangle\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a != b && b != c && c != a)
    {
        printf("Scalene Triangle\n");
    }
    if ((a == b) && (b != c))
    {
        printf("Isoceles Triangle\n");
    }
    if ((b == c) && (c != a))
    {
        printf("Isoceles Triangle\n");
    }
    if ((a == c) && (c != b))
    {
        printf("Isoceles Triangle\n");
    }
    if ((a == b) && (b == c))
    {
        printf("Equilateral Triangle\n");
    }

    d = (a * a) == (b * b) + (c * c);
    e = (b * b) == (a * a) + (b * b);
    f = (c * c) == (b * b) + (a * a);

    if (d || e || f)
    {
        printf("Right-angled triangle\n");
    }

    return 0;
}
