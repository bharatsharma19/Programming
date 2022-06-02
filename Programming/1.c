#include <stdio.h>

void func(int array[], int length)
{
    int sum = 0;
    int product = 32;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    for (int i = 0; i < length; i++)
    {
        product *= array[i];
    }
}
int main()
{
    int arr[] = {2, 4, 9};
    func(arr, 3);
    return 0;
}
