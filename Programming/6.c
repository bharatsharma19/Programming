#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void sortedDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[32] = {5, 9, 45, 2, 65, 98};
    int size = 6, element = 32, index = 1;
    display(arr, size);
    sortedDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}
