#include <stdio.h>

int main()
{
    int s[4][2] = {
        {1, 47}, {2, 53}, {3, 69}, {4, 84}};
    int(*p)[2];
    int i, j, *pint;

    for (i = 0; i < 4; i++)
    {
        p = &s[i];
        pint = (int *)p;
        printf("\n");

        for (j = 0; j < 2; j++)
        {
            printf("%d ", *(pint + j));
        }
    }

    return 0;
}
