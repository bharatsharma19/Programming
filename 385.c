#include <stdio.h>
#include <string.h>

int main()
{
    char str[63];
    char lastbutoneterm[63] = "A";
    char lastterm[63] = "B";
    int i;

    for (i = 1; i <= 64; i++)
    {
        strcpy(str, lastterm);
        strcat(str, lastbutoneterm);
        printf("%s\n", str);
        strcpy(lastbutoneterm, lastterm);
        strcpy(lastterm, str);
    }

    return 0;
}
