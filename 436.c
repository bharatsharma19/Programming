#include <stdio.h>

int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };

    struct book b1 = {"D", 123.54, 758};

    printf("Address of name = %u\n", &b1.name);
    printf("Address of price = %u\n", &b1.price);
    printf("Address of pages = %u\n", &b1.pages);

    return 0;
}
