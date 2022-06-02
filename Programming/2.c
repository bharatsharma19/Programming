#include <stdio.h>

void func(int n)
{
    int sum = 0;
    int product = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d , %d\n", i, j);
        }
    }
}
int main()
{
    func(3);
    return 0;
}
