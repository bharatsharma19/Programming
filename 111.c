#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, degree;
    float r, phi, p;

    printf("Enter the co-ordinates(x,y):");
    scanf("%d %d", &x, &y);

    r = sqrt(x * x + y * y);
    phi = atan(y / x);

    printf("\nPolar co-ordinates of (%d,%d) is (%f,%f)", x, y, r, phi);

    p = 3.141592;
    degree = phi * (180 / p);
    printf("\n\nPolar co-ordinates in degree : (%f,%d)\n\n", r, degree);

    return 0;
}
