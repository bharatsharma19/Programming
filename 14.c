#include <stdio.h>
int main()
{
    int n, n1, n2, n3, n4, n5;
    long int revnum;
    printf("Enter a 5-digit number for Reversal : ");
    scanf("%d", &n);
    n1 = n % 10;
    n = n / 10;
    n2 = n % 10;
    n = n / 10;
    n3 = n % 10;
    n = n / 10;
    n4 = n % 10;
    n = n / 10;
    n5 = n % 10;
    revnum = n1 * 10000 + n2 * 1000 + n3 * 100 + n4 * 10 + n5 * 1;
    printf("\nReversed Number is %d\n\n", revnum);
    return 0;
}