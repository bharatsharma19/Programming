#include <stdio.h>

int main()
{
    int stud[4][2];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        printf("Enter roll no. and marks\n");
        scanf("%d%d", &stud[i][0], &stud[i][1]);
    }

    printf("\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d %d\n", stud[i][0], stud[i][1]);
    }

    return 0;
}
