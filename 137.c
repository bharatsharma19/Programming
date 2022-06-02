#include <stdio.h>
int main()
{
    float r, g, b;
    float w, c, m, y, bl;
    float max;

    printf("Enter red,green and blur colour values(0,255)\n");
    scanf("%d %d %d", &r, &g, &b);

    if (r == 0 && g == 0 && b == 0)
    {
        c = m = y = 0;
        bl = 1;
    }
    else
    {
        r = r / 255;
        g = g / 255;
        b = b / 255;
        max = r;
        if (g > max)
            max = g;
        if (b > max)
            max = b;

        w = max;
        c = (w - r) / w;
        m = (w - g) / w;
        y = (w - b) / w;
        bl = 1 - w;
    }

    printf("CMYK = %f %f %f %f", c, m, y, bl);

    return 0;
}
