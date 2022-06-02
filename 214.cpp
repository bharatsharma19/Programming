#include <iostream>
using namespace std;

int lastOcc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    int restArray = lastOcc(arr, n, i + 1, key);

    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n, key, i;
    cout << "Enter Array Size:";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " Element:";
        cin >> arr[i];
    }
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter i : ";
    cin >> i;
    cout << "Enter key : ";
    cin >> key;

    cout << "Element : " << lastOcc(arr, n, i, key) << endl;

    return 0;
}
