#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fs, *ft;
    char ch;

    fs = fopen("491.c", "r");

    if (fs == NULL)
    {
        printf("Can't open source file\n");
        exit(1);
    }

    ft = fopen("492.c", "w");
    if (ft == NULL)
    {
        printf("Can't open target file\n");
        fclose(fs);
        exit(2);
    }

    while (1)
    {
        ch = fgetc(fs);

        if (ch == EOF)
        {
            break;
        }
        else
        {
            fputc(ch, ft);
        }
    }

    fclose(fs);
    fclose(ft);

    return 0;
}
