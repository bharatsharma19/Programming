#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max, i, *p;

    printf("Enter array size : ");
    scanf("%d", &max);

    p = (int *)malloc(max * sizeof(int));

    for (i = 0; i < max; i++)
    {
        p[i] = i * i;
        printf("%d ", p[i]);
    }

    return 0;
}
