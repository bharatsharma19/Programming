#include <stdio.h>
#include <string.h>

int main()
{
    char list[2][20] = {"Akshay", "Shivam"};
    int i;
    char yourname[20];

    printf("Enter your name : ");
    scanf("%s", yourname);

    for (i = 0; i < 2; i++)
    {
        if (strcmp(&list[i][0], yourname) == 0)
        {
            printf("\nWelcome\n");
            return 0;
        }
    }

    printf("\nSorry\n");

    return 0;
}
