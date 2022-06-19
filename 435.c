#include <stdio.h>

int main()
{
    struct book
    {
        char name[10];
        float price;
        int pages;
    };

    struct book b1 = {"A", 130.00, 554};
    struct book b2 = {"B", 130.67, 463};
    struct book b3 = {0};

    return 0;
}
