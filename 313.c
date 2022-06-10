#include <stdio.h>

int main()
{
    int avg, sum = 0;
    int i;
    int marks[30];

    for (i = 0; i < 30; i++)
    {
        printf("Enter Marks : ");
        scanf("%d", &marks);
    }
    for (i = 0; i < 30; i++)
    {
        sum = avg + marks[i];
    }

    avg = sum / 30;

    printf("Average Marks : %d", avg);

    return 0;
}
