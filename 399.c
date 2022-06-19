#include <stdio.h>

int main()
{
    char names[][20] = {
        "Akshay", "Raman", "Shivam", "Vivek"};
    int i;
    char t;

    printf("Original : %s\t%s\t\n", &names[2][0], &names[3][0]);

    for (i = 0; i < 20; i++)
    {
        t = names[2][i];
        names[2][i] = names[3][i];
        names[3][i] = t;
    }

    printf("New : %s\t%s\t", &names[2][0], &names[3][0]);

    return 0;
}
