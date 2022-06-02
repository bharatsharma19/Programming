#include <stdio.h>
#pragma warn - rvl
#pragma warn - par
#pragma warn - rch

int f1()
{
    int a = 5;
}

void f2(int x)
{
    printf("F2\n");
}

int f3()
{
    int x = 6;

    return x;

    x++;
}

int main()
{
    f1();
    f2(7);
    f3();

    return 0;
}
