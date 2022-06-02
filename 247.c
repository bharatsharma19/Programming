#include <stdio.h>

int main()
{
    float x = 3.14;
    float *y;
    float **z;

    z = &y;
    y = &x;

    printf("%p %p %p\n", &x, &y, &z);
    printf("%p %p\n", y, z);
    printf("%f %f %f", x, *y, **z);

    return 0;
}
