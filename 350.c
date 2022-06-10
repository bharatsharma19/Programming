#include <stdio.h>

int main()
{
    int s[4][2] = {
        {1, 56}, {2, 63}, {3, 84}, {4, 97}};
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" %d", *(*(s + i) + j));
        }
        printf("\n");
    }

    return 0;
}
