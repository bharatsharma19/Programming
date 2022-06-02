#include <stdio.h>
int main()
{
    int i, n = 1;
    printf("Prime number between 1 and 300 are\n");
    for (n = 1; n <= 300; n++)
    {

        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            printf("%d\n", n);
        }
    }

    return 0;
}
