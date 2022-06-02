#include <stdio.h>
int main()
{
    int num, orig, rev = 0, rem;
    printf("Enter a Number: ");
    scanf("%d", &num);
    orig = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    if (orig == rev)
        printf("This number is equal to its Reverse");
    else
        printf("This number is not equal to its Reverse");

    return 0;
}
