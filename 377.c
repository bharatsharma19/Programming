#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "Bharat Sharma";
    int len1, len2;

    len1 = strlen(arr);
    len2 = strlen("Humpty");

    printf("Length of string, %s is %d\n", arr, len1);
    printf("Length of string, %s is %d\n", "Humpty", len2);

    return 0;
}
