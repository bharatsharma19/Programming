#include <stdio.h>

int i;

void increment();
void decrement();

int main()
{
    printf("\ni = %d\n", i);

    increment();
    increment();
    decrement();
    decrement();

    return 0;
}

void increment()
{
    i = i + 1;
    printf("On Incrementing, i = %d\n", i);
}

void decrement()
{
    i = i - 1;
    printf("On Decrementing, i = %d\n", i);
}
