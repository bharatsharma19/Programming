#include <stdio.h>
int main()
{
    int i = 1, x = 71, blanks = 0, j, val, k;

    while (i <= 7)
    {
        j = 65;
        val = x;
        while (j <= val)
        {
            printf("%c", j);
            j++;
        }
        if (i == 1)
        {
            val--;
        }
        k = 1;
        while (k <= blanks)
        {
            printf(" ");
            k++;
        }
        blanks = 2 * i - 1;
        while (val >= 65)
        {
            printf("%c", val);
            val--;
        }
        printf("\n");
        x--;
        i++;
    }

    return 0;
}
