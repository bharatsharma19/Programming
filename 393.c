#include <stdio.h>
#include <string.h>

int main()
{
    int len, i, sum, digit, multiple;

    char str[20];

    printf("Enter credit card number : ");
    scanf("%s", str);

    len = strlen(str);

    sum = 0;

    for (i = 15; i >= 0; i--)
    {
        digit = str[i] - '0';

        if (i % 2 == 0)
        {
            multiple = digit * 2;
            digit = multiple < 10 ? multiple : multiple - 9;
        }

        sum += digit;
    }

    printf("%d\n", sum);

    if (sum % 10 == 0)
    {
        printf("Valid credit card number\n");
    }
    else
    {
        printf("Invalid credit card number\n");
    }

    return 0;
}
