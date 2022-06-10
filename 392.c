#include <stdio.h>
#include <string.h>

int main()
{
    char str[11];
    int i, j, sum;

    printf("Enter 10 digit ISBN Number : ");
    scanf("%s", str);

    j = 2;
    sum = 0;

    for (i = 8; i >= 0; i--)
    {
        sum = sum + (str[i] - '0') * j;
        j++;
    }

    for (i = 0; i <= 9; i++)
    {
        if ((sum + i) % 11 == 0)
        {
            break;
        }
    }

    if (i == str[9] - '0')
    {
        printf("ISBN Number is verified and found to be correct\n");
    }
    else
    {
        printf("Checksum error in ISBN Number\n");
    }

    return 0;
}
