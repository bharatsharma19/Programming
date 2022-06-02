#include <stdio.h>
int main()
{
    int r, s, a, young;
    printf("Enter age of ram : ");
    scanf("%d", &r);
    printf("Enter age of shyam : ");
    scanf("%d", &s);
    printf("Enter age of ajay : ");
    scanf("%d", &a);

    if (r < s)
    {
        if (r < a)
        {
            young = r;
        }
        else
        {
            young = a;
        }
    }
    else
    {
        if (s < a)
        {
            young = s;
        }
        else
        {
            young = a;
        }
    }

    printf("The youngest from three is %d", young);

    return 0;
}
