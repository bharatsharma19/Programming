#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, num, i, fact;

    while (1)
    {
        printf("1.Factorial\n");
        printf("2.Prime\n");
        printf("3.Odd/even\n");
        printf("4.Exit\n");
        printf("Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number : ");
            scanf("%d", &num);
            fact = 1;
            for (i = 1; i <= num; i++)
            {
                fact = fact * i;
            }
            printf("Factorial is %d\n", fact);
            break;

        case 2:
            printf("Enter number : ");
            scanf("%d", &num);
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    printf("Not a prime number\n");
                    break;
                }
            }
            if (i == num)
            {
                printf("Prime number\n");
            }
            break;

        case 3:
            printf("Enter number : ");
            scanf("%d", &num);
            if (num % 2 == 0)
            {
                printf("Even\n");
            }
            else
            {
                printf("Odd\n");
            }
            break;

        case 4:
            exit(0);

        default:
            printf("Wrong choice\0\n");
            break;
        }
    }

    return 0;
}
