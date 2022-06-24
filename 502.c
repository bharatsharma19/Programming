#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char c;
    fp = fopen("TRY.C", "r");
    if (fp == NULL)
    {
        puts("Cannot open file\n");
        exit(1);
    }
    while ((c = getc(fp)) != EOF)
        putch(c);
    fclose(fp);
    return 0;
}
