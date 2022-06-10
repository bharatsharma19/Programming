#include <stdio.h>

int main()
{
    int num[] = {7, 6, 5, 9, 8, 4, 1, 2, 3};
    int n, i, count;

    printf("Enter an element to search : ");
    scanf("%d", &n);
    count = 0;

    for (i = 0; i < 10; i++)
    {
        if (num[i] == n)
        {
            count++;
        }
    }

    printf("Number %d is found %d time(s) in the array\n", n, count);

    return 0;
}
