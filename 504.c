#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[80];
    fp = fopen("TRY.C", "r");
    while (fgets(str, 80, fp) != EOF)
        fputs(str, "w");
    fclose(fp);
    return 0;
}
