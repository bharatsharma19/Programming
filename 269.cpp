#include <iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int k = arr[0];

    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }

    int count[10] = {0};

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }

    int outputArray[n];

    for (int i = n - 1; i >= 0; i--)
    {
        outputArray[--count[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = outputArray[i];
    }
}

int main()
{
    int arr[] = {8, 6, 5, 4, 9, 2, 3, 1, 7};
    countSort(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
