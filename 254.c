#include <stdio.h>

void fun(int, int, int);

int main()
{
    int x, y, z;

    printf("Enter x,y and z\n");
    scanf("%d %d %d", &x, &y, &z);

    printf("Values of x,y and z as entered\n");
    printf("x=%d\t y=%d\t z=%d\n", x, y, z);

    fun(x, y, z);

    return 0;
}

void fun(int x, int y, int z)
{
    int i, t;

    for (i = 0; i <= 2; i++)
    {
        t = z;
        z = y;
        y = x;
        x = t;

        printf("\n\nAfter right shifting of values of %d time(s) : ", i + 1);

        printf("\nx=%d\t y=%d\t z=%d", x, y, z);
    }
}
