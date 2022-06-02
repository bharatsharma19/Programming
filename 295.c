#include <stdio.h>
#define SQUARE(n) n *n

int main()
{
    int j;

    j = 64 / SQUARE(4);

    printf("J = %d\n", j);

    return 0;
}
