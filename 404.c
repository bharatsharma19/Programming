#include <stdio.h>
#include <string.h>

void xstrrev(char *s)
{
    int l, i;
    char *t, temp;

    l = strlen(s);
    t = s + l - 1;

    for (i = 1; i <= l / 2; i++)
    {
        temp = *s;
        *s = *t;
        *t = temp;

        s++;
        t--;
    }
}

int main()
{
    char str[][32] = {"Humans", "Animals"};

    int i;

    for (i = 0; i <= 1; i++)
    {
        xstrrev(str[i]);
        printf("%s\n", str[i]);
    }

    return 0;
}
