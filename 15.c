#include <stdio.h>
int main()
{
    int amount, one, two, five, ten, fifty, hundred, twohundred, fivehundred, twothousand, total;
    printf("Enter the Amount : ");
    scanf("%d", &amount);
    twothousand = amount / 2000;
    amount = amount % 2000;
    fivehundred = amount / 500;
    amount = amount % 500;
    twohundred = amount / 200;
    amount = amount % 200;
    hundred = amount / 100;
    amount = amount % 100;
    fifty = amount / 50;
    amount = amount % 50;
    ten = amount / 10;
    amount = amount % 10;
    five = amount / 5;
    amount = amount % 5;
    two = amount / 2;
    amount = amount % 2;
    one = amount / 1;
    amount = amount % 1;
    total = twothousand + fivehundred + twohundred + hundred + fifty + ten + five + two + one;
    printf("\nSmallest Number of Notes : %d\n\n", total);
    return 0;
}
