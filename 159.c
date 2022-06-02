#include <stdio.h>
int main()
{
    int n, no, flag, small, big, range;

    flag = 0;

    printf("How many numbers are there in a set?\n");
    scanf("%d", &n);

    while (n > 0)
    {
        printf("Enter numbers\n");
        scanf("%d", &no);

        if (flag == 0)
        {
            small = big = no;
            flag = 1;
        }
        else
        {
            if (no > big)
            {
                big = no;
            }
            if (no < small)
            {
                small = no;
            }
        }
        n--;
    }

    if (small < 0)
    {
        range = small + big;
    }
    else
    {
        range = big - small;
    }
    if (range < 0)
    {
        range = range * (-1);
    }

    printf("The range of given set of numbers is %d\n", range);

    return 0;
}
