#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void sortedInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i] = arr[i + 1];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[100] = {2, 4, 6, 8, 16, 32, 64, 128, 3, 9, 27, 81, 343};
    int size = 12;
    int element = 32;
    int index = 3;
    display(arr, size);
    sortedInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);
    return 0;
}
