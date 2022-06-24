#include <stdio.h>

int main()
{
    FILE *fs, *ft;
    char ch;
    char source[67], target[67];
    puts("Enter source file name: ");
    gets(source);
    puts("Enter target file name: ");
    gets(target);
    fs = fopen(source, "r"); /* read only mode for source file */
    if (fs == NULL)
    {
        puts("Unable to open source file");
        exit(0);
    }
    ft = fopen(target, "w+"); /* write / modify mode for target file */
    if (ft == NULL)
    {
        fclose(fs);
        puts("Unable to open target file");
        exit(0);
    }
    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
            break;
        else
        {
            /* replace lower case character by upper case character */
            if (islower(ch))
                fputc(toupper(ch), ft);
            else
                fputc(ch, ft);
        }
    }
    printf("\nFile copied!!\n");
    fclose(fs);
    fclose(ft);

    return 0;
}
