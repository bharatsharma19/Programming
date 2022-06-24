#include <stdio.h>

int main()
{
    FILE *fp;
    /* counters for characters per line & number of lines per page */
    int charcount = 0, linecount = 0;
    char ch;
    fp = fopen("NOTES.TXT", "r"); /* read only mode */
    if (fp == NULL)
    {
        puts("Unable to open file\n");
        exit(1);
    }
    /* read until end of file */
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\t')
            charcount += 3; /* add 3 characters for a tab */
        charcount++;
        if (ch == '\n' || charcount >= 80)
        {
            linecount++;   /* increment line counter after 80
             characters */
            charcount = 0; /* reset character counter */
        }
        if (linecount == 49) /* print 49 lines per page */
        {
            puts("Insert another page, then press any key...");
            linecount = 0; /* reset line counter */
        }
        fputc(ch, stdout); /* send to printer */
    }
    fclose(fp);

    return 0;
}
