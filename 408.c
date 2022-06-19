#include <stdio.h>

int main()
{
    char str[30];
    char *p;
    int count = 0, l;
    printf("\nEnter name, middle name and surname : ");
    gets(str);
    p = str;

    while (*p)
    {
        if (*p == ' ')
            count++;
        p++;
    }
    p = str;
    printf("\nThe name converted to initials is : ");
    while (count)
    {
        printf("%c.", *p);
        while (*p != ' ')
            p++;
        p++;
        count--;
    }
    printf("%s\n", p);

    return 0;
}
