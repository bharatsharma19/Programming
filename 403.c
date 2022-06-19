#include <stdio.h>
#include <string.h>

int main()
{
    char *str[] = {"Rajesh", "Suresh", "Anand", "Shyam"};
    char *t;
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = (i + 1); j < 4; j++)
        {
            if ((strcmp(str[i], str[j])) > 0)
            {
                t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        printf("%s\t", str[i]);
    }

    return 0;
}
