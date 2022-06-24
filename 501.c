#include <stdio.h>

void openfile(char *, FILE **);

int main()
{
    FILE *fp;
    openfile("Myfile.txt", fp);
    if (fp == NULL)
        printf("Unable to open file…\n");
    return 0;
}

void openfile(char *fn, FILE **f)
{
    *f = fopen(fn, "r");
}
