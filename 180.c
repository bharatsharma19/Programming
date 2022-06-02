#include <stdio.h>
#include <math.h>
int main()
{
    int pop, n;
    float p, r;

    r = 10;
    p = 10000;

    for (n = 1; n <= 10; n++)
    {
        pop = p / pow((1 + r / 100), n);
        printf("Population %d years ago = %d\n", n, pop);
    }

    return 0;
}
