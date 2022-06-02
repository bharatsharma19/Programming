#include <stdio.h>

void func1();
void func2();

#pragma startup func1
#pragma exit func2

int main()
{
    printf("Main\n");

    return 0;
}

void func1()
{
    printf("Function 1\n");
}

void func2()
{
    printf("Function 2\n");
}
