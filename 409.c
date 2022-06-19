#include <stdio.h>

int main()
{
    char str[80];
    int count = 0;
    char *s = str;
    printf("\nEnter the string:\n");
    gets(str);
    while (*s)
    {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
        {
            s++;
            if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' ||
                *s == 'u')
                count++;
        }
        s++;

        printf("Number of occurrences of two successive vowels: %d\n",
               count);

        return 0;
    }
}
