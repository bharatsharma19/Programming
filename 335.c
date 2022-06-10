#include <stdio.h>
#include <conio.h>

#define n 10

int main()
{
    double set[n][2] = {
        3.0, 1.5,
        4.5, 2.0,
        5.5, 3.5,
        6.5, 5.0,
        7.5, 6.0,
        8.5, 7.5,
        8.0, 9.0,
        9.0, 10.5,
        9.5, 12.0,
        10.0, 14.0};
    double help[n], sx = 0, sy = 0, sxy = 0, sx2 = 0, a, b, xbar, ybar;
    int i;

    for (i = 0; i < n; i++)
    {
        sx += set[i][0];
        sy += set[i][1];
        sxy += set[i][0] * set[i][1];
        sx2 += set[i][0] * set[i][0];
    }

    xbar = sx / n;
    ybar = sy / n;

    b = (n * sxy - sx * sy) / (n * sx2 - sx * sx);
    a = ybar - b * xbar;

    printf("\nRequired equation is\n\ny = %.2lf + %.2lfx", a, b);

    return 0;
}
