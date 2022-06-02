#include <stdio.h>

int x = 10;

void display();

int main()
{
    int x = 20;

    printf("%d\n", x);

    display();

    return 0;
}

void display()
{
    printf("%d\n", x);
}
