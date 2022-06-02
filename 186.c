#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any one of the alphabets a,b or c\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
        printf("A or a\n");
        break;
    case 'b':
    case 'B':
        printf("B or b\n");
        break;
    case 'c':
    case 'C':
        printf("C or c\n");
        break;
    default:
        printf("Default case\n");
    }
    return 0;
}
