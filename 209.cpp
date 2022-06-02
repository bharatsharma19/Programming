#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool restedArray = sorted(arr + 1, n - 1);

    return (arr[0] < arr[1] && restedArray);
}

int main()
{
    int n;
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

    cout << "Array is sorted or not ? -> " << sorted(arr, n) << endl;

    return 0;
}
