#include <stdio.h>

int main()
{
    FILE *fp;
    char str[11], ch;
    int i = 0;
    fp = fopen("INPUT.TXT", "r");
    if (fp == NULL)
    {
        puts("Unable to open file\n");
        exit(1);
    }
    while ((ch = getc(fp)) != EOF)
    {
        if (ch == '\n' || ch == ' ')
        {
            str[i] = '\0';
            strrev(str);
            printf("%s ", str);
            i = 0;
        }
        else
            str[i++] = ch;
    }
    fclose(fp);

    return 0;
}
