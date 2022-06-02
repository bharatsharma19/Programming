#include <stdio.h>
#include <stdlib.h>
int main()
{
    int goals;
    printf("Enter goals scored by team : ");
    scanf("%d", &goals);
    if (goals <= 5)
    {
        goto sos;
    }
    else
    {
        printf("Another Condition\n");
        exit(1);
    }

sos:
    printf("Error\n");

    return 0;
}
