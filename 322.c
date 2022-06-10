#include <stdio.h>

int main()
{
    int num[] = {12, 4, 5, 1, 9, 13, 19, 34, 54, 11};
    int i, t;

    for (i = 0; i < 10; i = i + 2)
    {
        t = num[i];
        num[i] = num[i + 1];
        num[i + 1] = t;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }

    return 0;
}
