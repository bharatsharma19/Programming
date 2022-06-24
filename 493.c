#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char str[64];

    fp = fopen("493.txt", "w");

    if (fp == NULL)
    {
        printf("Can't open file");
        exit(1);
    }

    printf("Enter few lines of text : ");

    while (strlen(gets(str)) > 0)
    {
        fputs(str, fp);
        fputs("\n", fp);
    }
    fclose(fp);

    printf("File contents are being read now...\n",str);

    fp = fopen("493.txt", "r");
    if (fp == NULL)
    {
        puts("Can't open file");
        exit(2);
    }

    while (fgets(str, 63, fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);

    return 0;
}
