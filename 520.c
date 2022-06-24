#include <stdio.h>
#include <string.h>

FILE *ft;
int charcount;
void newstr(char *, char *);

int main()
{
    FILE *fs;
    char str[80], source[67], target[67];
    char *apstr[] = {"a", "the", "an"};
    int i;
    puts("Enter source file name: ");
    gets(source);
    puts("Enter target file name: ");
    gets(target);
    fs = fopen(source, "r"); /* read only mode for source file */
    if (fs == NULL)
    {
        puts("Unable to open source file\n");
        exit(1);
    }
    ft = fopen(target, "w+"); /* write / modify mode for target file */
    if (ft == NULL)
    {
        fclose(fs);
        puts("Unable to create target file\n");
        exit(2);
    }
    while (fgets(str, 79, fs) != NULL)
    {
        newstr(str, apstr[0]);
        for (i = 1; i <= 2; i++)
        {
            fseek(ft, -charcount, SEEK_CUR);
            fgets(str, charcount, ft);
            fseek(ft, -charcount, SEEK_CUR);
            newstr(str, apstr[i]);
        }
    }
    fclose(fs);
    fclose(ft);

    return 0;
}

void newstr(char *p, char *t)
{
    int len = strlen(t);
    charcount = 0;
    while (*p)
    {
        if ((!strncmp(p, t, len) && (*(p - 1) == ' ') && (*(p + len) == ' ' || *(p + len) == '\n')) || (!strncmp(p, t, len) && (charcount == 0) && (*(p + len) == ' ' || *(p + len) == '\n')))
        {
            fputc(' ', ft);
            p = p + strlen(t) - 1;
        }
        else
            fputc(*p, ft);
        p++;
        charcount++;
    }
    charcount++;
}
