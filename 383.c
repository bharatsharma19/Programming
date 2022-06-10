#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20], news[20];
    char *s, *t;
    int pos, n, i;

    printf("\nEnter a string : ");
    scanf("%s", str);

    printf("Enter position and no. of characters to extract\n");
    scanf("%d%d", &pos, &n);

    s = str;
    t = news;

    if (pos < 0 || pos > strlen(str))
    {
        printf("Improper position value\n");
        exit(1);
    }

    if (n < 0)
    {
        n = 0;
    }
    if (n > strlen(str))
    {
        n = n - strlen(str) - 1;
    }
    s = s + pos;

    for (i = 0; i < n; i++)
    {
        *t = *s;
        s++;
        t++;
    }

    *t = '\0';

    printf("Substring : %s\n", news);

    return 0;
}
