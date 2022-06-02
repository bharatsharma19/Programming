#include <stdio.h>

int main()
{
    float a = 13.5;
    float *b, *c;
    b = &a;
    c = b;

    printf("%u %u %u\n", &a, b, c);
    printf("%f %f %f %f %f\n", a, *(&a), *&a, *b, *c);

    return 0;
}
