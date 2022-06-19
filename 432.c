#include <stdio.h>

int main()
{
    char name[3];
    float price[3];
    int pages[3];

    printf("\nEnter name, price and pages of a book\n");

    for (int i = 0; i <= 2; i++)
    {
        scanf("%c%f%d", &name[i], &price[i], &pages[i]);
    }

    printf("You Entered\n");

    for (int i = 0; i <= 2; i++)
    {
        printf("%c\t%f\t%d\n", name[i], price[i], pages[i]);
    }

    return 0;
}
