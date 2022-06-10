#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float x[11][2] = {
        34.22,
        102.43,
        39.87,
        100.93,
        41.85,
        97.43,
        43.23,
        97.81,
        40.06,
        98.32,
        53.29,
        98.32,
        53.29,
        100.07,
        49.12,
        91.59,
        40.71,
        94.85,
        55.15,
        94.65,

    },
          xysum = 0, xsum = 0, ysum = 0, x2sum = 0, y2sum = 0, n = 11, r;
    int i;

    for (i = 0; i < 11; i++)
    {
        xsum = xsum + x[i][0];
        ysum = ysum + x[i][0];
        xysum = xysum + x[i][0] * x[i][1];
        x2sum = x2sum + x[i][0] * x[i][0];
        y2sum = y2sum + x[i][1] * x[i][1];
    }

    r = (xysum - xsum * ysum) / (sqrt((n * x2sum - xsum * xsum) * (n * y2sum - ysum * ysum)));

    printf("Coefficient of correlation (r) = %f", r);

    return 0;
}
