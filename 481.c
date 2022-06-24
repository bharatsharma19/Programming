#include <stdio.h>

int main()
{
    int weight = 54;

    printf("Weight is %d Kg\n", weight);
    printf("Weight is %2d Kg\n", weight);
    printf("Weight is %4d Kg\n", weight);
    printf("Weight is %6d Kg\n", weight);
    printf("Weight is %-6d Kg\n", weight);
    printf("Weight is %1d Kg\n", weight);

    return 0;
}
