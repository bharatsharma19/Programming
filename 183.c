#include <stdio.h>
int main()
{
    int i, j, k, l, sp;
    sp = 20;

    for (i = 1, k = 1; i < 5; i++)
    {
        for (l = 1; l <= sp; l++)
        {
            printf(" ");
        }
        sp -= 2;
        for (j = 1; j <= 1; j++, k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
