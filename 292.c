#include <stdio.h>

int x = 10;

int main()
{
    int x = 20;

    {
        int x = 30;
        printf("%d\n", x);
    }
    printf("%d\n", x);

    return 0;
}
