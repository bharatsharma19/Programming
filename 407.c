#include <stdio.h>

int main()
{
    char str[80], str2[80];
    char *s, *q, *p;
    int i;
    printf("\nEnter a sentence not more than 80 chars long:\n");
    gets(str);
    s = str;  /* Base address of the string */
    p = str2; /* Base address of new string */
    while (*s)
    {
        q = s;
        if (*s == 't' || *s == 'T')
        {
            s++;
            if (*s == 'h')
            {
                s++;
                if (*s == 'e')
                    ;
                else
                {
                    for (i = 0; i <= 2; i++)
                        *p++ = *q++;
                }
            }
            else
            {
                *p++ = *q++;
                s--;
            }
        }
        else
            *p++ = *s;
        s++;
    }
    *p = '\0';
    printf("\nSentence after deleting all occurences of 'the' is : ");
    puts(str2);

    return 0;
}
