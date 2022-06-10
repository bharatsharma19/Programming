#include <stdio.h>

int main()
{
    int num[25], i;
    int neg = 0, pos = 0, odd = 0, even = 0;

    printf("\nEnter 25 elements of array\n");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 25; i++)
    {
        num[i] < 0 ? neg++ : (pos++);
        num[i] % 2 ? odd++ : (even++);
    }

    printf("Negative Elements = %d\n", neg);
    printf("Positive Elements = %d\n", pos);
    printf("Even Elements = %d\n", even);
    printf("Odd Elements = %d\n", odd);

    return 0;
}
