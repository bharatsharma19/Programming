#include <stdio.h>
#include <string.h>

int main()
{
    char *str[] = {
        "We all teach you", "How will you teach us?", "Why will you teach us?", "Teach Us"};
    char str1[64], *p;
    int i;

    printf("Enter String to be searched : ");
    scanf("%s", str1);

    p = NULL;

    for (i = 0; i < 4; i++)
    {
        p = strstr(str[i], str1);
        if (p != NULL)
        {
            printf("%s found in the array", str1);
            return 0;
        }
    }

    printf("%s not found in the array", str1);

    return 0;
}
