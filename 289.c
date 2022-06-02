#include <stdio.h>

int i = 0;

void val();

int main()
{
    printf("Main's i = %d\n", i);
    i++;

    val();

    printf("Main's i = %d\n", i);

    val();

    return 0;
}

void val()
{
    i = 100;

    printf("Val's i = %d\n", i);

    i++;
}
