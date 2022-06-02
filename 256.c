#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2);
float area();

int main()
{
    int x1, x2, y1, y2;
    float z, x;

    printf("Enter co-ordinates of two point\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    z = distance(x1, y1, x2, y2);
    printf("Distance between two points = %f\n", z);

    x = area();
    printf("Area of triangle = %f\n", x);

    return 0;
}

float distance(int x1, int y1, int x2, int y2)
{
    float m, d;

    m = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    d = sqrt(m);

    return (d);
}

float area()
{
    float triarea(float, float, float);
    float a, b, c, d;
    float area1, area2, area3, totalarea;
    float a1, b1, c1;
    int x1, x2, x3, x4, y1, y2, y3, y4;

    printf("Enter co-ordinates of first point : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter co-ordinates of second point : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter co-ordinates of third point : ");
    scanf("%d %d", &x3, &y3);

    printf("Enter co-ordinates of one more point : ");
    scanf("%d %d", &x4, &y4);

    a = distance(x1, y1, x2, y2);
    b = distance(x1, y1, x3, y3);
    c = distance(x2, y2, x3, y3);
    d = triarea(a, b, c);
    a1 = distance(x1, y1, x4, y4);
    b1 = distance(x2, y2, x4, y4);
    c1 = distance(x3, y3, x4, y4);

    area1 = triarea(a, a1, b1);
    area2 = triarea(b, a1, c1);
    area3 = triarea(c, b1, c1);

    totalarea = area1 + area2 + area3;

    if ((totalarea - d) <= 0.0009)
    {
        printf("Point (%d,%d) lies inside\n", x4, y4);
    }
    else
    {
        printf("Point (%d,%d) lies outside\n", x4, y4);
    }

    return (d);
}

float triarea(float a, float b, float c)
{
    float s, m, x;

    s = (a + b + c) / 2;
    m = s * (s - a) * (s - b) * (s - c);
    x = sqrt(m);

    return (x);
}
