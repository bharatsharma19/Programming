#include <stdio.h>

FILE *fs, *ft;

void code();
void decode();

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        puts("Improper usage. Correct usage is:\n");
        puts("CH11GF1 <source file> <target file> <C/D>\n");
        exit(1);
    }
    fs = fopen(argv[1], "r");
    if (fs == NULL)
    {
        printf("Cannot open source file\n");
        puts(argv[1]);
        exit(2);
    }
    ft = fopen(argv[2], "w");
    if (ft == NULL)
    {
        puts("Cannot open target file\n");
        puts(argv[2]);
        fclose(fs);
        exit(3);
    }
    if (*argv[3] == 'c' || *argv[3] == 'C')
        code();
    else
        decode();
    fclose(fs);
    fclose(ft);
    printf("Mission Accomplished\n");

    return 0;
}

void code()
{
    int ch;
    while ((ch = getc(fs)) != EOF)
    {
        ch = ch + 128; /* encrypt - offset each character by 128 */
        putc(ch, ft);
    }
}

void decode()
{
    int ch;
    while ((ch = getc(fs)) != EOF)
    {
        ch = ch - 128; /* decrypt - offset each character by -128 */
        putc(ch, ft);
    }
}
