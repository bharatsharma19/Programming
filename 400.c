#include <stdio.h>

int main()
{
    char *names[] = {
        "Akshay", "Raman", "Shivam", "Vivek"};
    char *temp;

    printf("Original : %s\t%s\t\n", names[2], names[3]);

    temp = names[2];
    names[2] = names[3];
    names[3] = temp;

    printf("New : %s\t%s\t", names[2], names[3]);

    return 0;
}
