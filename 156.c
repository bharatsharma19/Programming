#include <stdio.h>
int main()
{
    int m = 21, p, c;
    while (1)
    {
        printf("No. of matches left = %d\n", m);
        printf("Pick up 1,2,3 or 4 matches\n");
        scanf("%d", &p);

        if (p > 4 || p < 1)
        {
            continue;
        }

        m = m - p;
        printf("No. of matches left = %d\n", m);

        c = 5 - p;
        printf("Out of which computer picked up %d\n", c);

        m = m - c;

        if (m == 1)
        {
            printf("No. of matches left %d\n\n", m);
            printf("You lost the game\n");
            break;
        }
    }

    return 0;
}
