#include <stdio.h>

int main()
{
    static int count = 5;

    printf("Count = %d\n", count--);

    if (count != 0)
    {
        main();
    }

    return 0;
}
