#include <stdio.h>
#include <string.h>

int xstrlen(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return (length);
}

int main()
{
    char arr[] = "Bharat Sharma";
    int len1, len2;

    len1 = xstrlen(arr);
    len2 = xstrlen("Humpty");

    printf("Length of string, %s is %d\n", arr, len1);
    printf("Length of string, %s is %d\n", "Humpty", len2);

    return 0;
}
