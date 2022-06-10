#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Jerry", str2[] = "Ferry";
    int i, j, k;

    i = strcmp(str1, "Jerry");
    j = strcmp(str1, str2);
    k = strcmp(str1, "Jerry Boy");

    printf("%d\n%d\n%d\n", i, j, k);

    return 0;
}
