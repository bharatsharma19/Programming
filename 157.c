#include <stdio.h>
int main()
{
    int p, n, z, num;
    char ans = 'y';

    p = n = z = 0;

    while (ans == 'y' || ans == 'Y')
    {
        printf("Enter a number : ");
        scanf("%d", &num);

        if (num == 0)
        {
            z++;
        }
        if (num > 0)
        {
            p++;
        }
        if (num < 0)
        {
            n++;
        }

        fflush(stdin);

        printf("Do you want to continue ?\n");
        scanf("%c", &ans);
    }

    printf("You entered %d positive number\n", p);
    printf("You entered %d negative number\n", n);
    printf("You entered %d zeroes\n", z);

    return 0;
}
