#include <stdio.h>

int main()
{
    char str[64], str1[64];
    char *s, *p;

    printf("Enter a sentence : ");
    gets(str);

    s = str;
    p = str1;

    while (*s)
    {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            s++;
        else if (*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U')
            s++;
        else
            *p++ = *s++;
    }

    *p = '\0';
    printf("\nSentence after removing all vowels is : ");
    puts(str1);

    return 0;
}
