#include <stdio.h>

int main()
{
    FILE *fp;
    char *str[25], words[25][25], *t;
    int i, j, n;
    fp = fopen("trial.TXT", "r");
    if (fp == NULL)
    {
        puts("Unable to open file\n");
        exit(1);
    }
    for (n = 0; n <= 24; n++)
        str[n] = words[n];
    for (n = 0; fgets(str[n], 24, fp) != NULL; n++)
        ;
    for (i = 0; i <= n - 2; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }
    printf("Total Number of words in the list is %d\n", n);
    printf("Alphabetical listing of words\n");
    for (i = 0; i <= n - 1; i++)
        printf("%s\n", str[i]);
    fclose(fp);

    return 0;
}
