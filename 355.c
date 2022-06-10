#include <stdio.h>

int main()
{
    int a[5][5] = {
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 6},
        {3, 4, 5, 6, 7},
        {4, 5, 6, 7, 8},
        {5, 6, 7, 8, 9}};

    int i, j, big;
    big = a[0][0];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] > big)
            {
                big = a[i][j];
            }
        }
    }

    printf("Largest Number in matrix is %d\n", big);

    return 0;
}
