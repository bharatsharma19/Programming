#include <stdio.h>

void fnc();

int main()
{
    fnc();
    fnc();

    return 0;
}

void fnc()
{
    auto int i = 0;
    register int j = 0;
    static int k = 0;

    i++;
    j++;
    k++;

    printf("%d %d %d\n", i, j, k);
}
