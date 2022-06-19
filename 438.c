#include <stdio.h>

int main()
{
    struct address
    {
        char phone[10];
        char city[24];
        int pin;
    };

    struct emp
    {
        char name[32];
        struct address a;
    };

    struct emp e = {"Tom", "1234", "Gwalior", 474001};

    printf("Name = %s\nPhone=%s\n", e.name, e.a.phone);
    printf("City = %s\nPin = %d\n", e.a.city, e.a.pin);

    return 0;
}
