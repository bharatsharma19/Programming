#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);

    ch >= 97 && ch <= 122 ? printf("Character entered is lower case\n") : printf("Character entered is not lower case\n");

    return 0;
}
