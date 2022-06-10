#include <stdio.h>

void display1(int *, int);
void display2(int[], int);

int main()
{
    int num[] = {24, 26, 23, 21, 28, 27, 29};

    display1(&num[0], 7);
    display2(&num[0], 7);

    return 0;
}

void display1(int *ptr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Element : %d\n", *ptr);
        ptr++;
    }
    printf("\n");
}

void display2(int ptr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Element : %d\n", ptr[i]);
    }
}
