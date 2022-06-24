#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    char source[67];
    int count = 1;

    puts("Enter the file name : ");
    gets(source);
    fp = fopen(source, "r"); /* read only mode for the source file */
    if (fp == NULL)
    {
        puts("Unable to open the file.");
        exit(0);
    }
    system("cls");
    printf("Filename : %s", source);
    printf("\nLine :- %d\t", count);
    while ((ch = getc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            count++;
            printf("\nLine :- %d\t", count);
        }
        else
            printf("%c", ch);
    }
    fclose(fp);

    return 0;
}
