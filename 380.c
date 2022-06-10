#include <stdio.h>

void xstrcpy(char *t, char *s)
{
    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}

int main()
{
    char source[] = "Bharat Sharma", target[20];

    xstrcpy(target, source);

    printf("Source String : %s\n", source);
    printf("Copied String : %s\n", target);

    return 0;
}
