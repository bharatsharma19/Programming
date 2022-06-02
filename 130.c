#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    float per;

    printf("Enter your marks in all subjects\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    per = (m1 + m2 + m3 + m4 + m5) / 5;

    printf("Your percentage is %f", per);
    printf("\n");

    if (per >= 60)
        printf("First division\n");
    else
    {
        if (per >= 50)
            printf("Second division\n");
        else
        {
            if (per >= 40)
                printf("Third division\n");
            else
                printf("Fail\n");
        }
    }

    return 0;
}
