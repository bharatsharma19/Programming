#include <stdio.h>

int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };

    struct book b1, b2, b3;

    printf("Enter name, price and pages of book\n");
    scanf("%c%f%d", &b1.name, &b1.price, &b1.pages);

    printf("Enter name, price and pages of book\n");
    scanf("%c%f%d", &b2.name, &b2.price, &b2.pages);

    printf("Enter name, price and pages of book\n");
    scanf("%c%f%d", &b3.name, &b3.price, &b3.pages);

    printf("You Entered\n");
    printf("%c\t%f\t%d\n", b1.name, b1.price, b1.pages);
    printf("%c\t%f\t%d\n", b2.name, b2.price, b2.pages);
    printf("%c\t%f\t%d\n", b3.name, b3.price, b3.pages);

    return 0;
}
