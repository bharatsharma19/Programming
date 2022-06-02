#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return firstOcc(arr, n, i + 1, key);
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

    cout << "Element : " << firstOcc(arr, n, i, key) << endl;

    return 0;
}
