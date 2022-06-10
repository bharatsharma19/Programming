#include <stdio.h>

void display1(int);
void display2(int *);

int main()
{
    int i;
    int marks[] = {96, 83, 93, 92, 89, 81};

    for (i = 0; i < 6; i++)
    {
        display1(marks[i]);
    }
    printf("\n");
    for (i = 0; i < 6; i++)
    {
        display2(&marks[i]);
    }

    return 0;
}

void display1(int m)
{
    printf("%d ", m);
}

void display2(int *n)
{
    printf("%d ", *n);
}
