#include <stdio.h>
#include <math.h>

void stats(int *, float *, double *);

int main()
{
    int sum;
    float avg;
    double stdev;

    stats(&sum, &avg, &stdev);

    printf("Sum = %d\nAverage = %f\nStandard deviation = %lf\n", sum, avg, stdev);

    return 0;
}

void stats(int *sum, float *avg, double *stdev)
{
    int n1, n2, n3, n4, n5;

    printf("Enter number : ");
    scanf("%d", &n1);
    printf("Enter number : ");
    scanf("%d", &n2);
    printf("Enter number : ");
    scanf("%d", &n3);
    printf("Enter number : ");
    scanf("%d", &n4);
    printf("Enter number : ");
    scanf("%d", &n5);

    *sum = n1 + n2 + n3 + n4 + n5;
    *avg = *sum / 5;
    *stdev = sqrt((pow((n1 - *avg), 2.0) +
                   pow((n2 - *avg), 2.0) +
                   pow((n3 - *avg), 2.0) +
                   pow((n4 - *avg), 2.0) +
                   pow((n5 - *avg), 2.0)) /
                  4);
}
