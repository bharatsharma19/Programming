#include <iostream>
#include <climits>
using namespace std;

bool pairSum(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << "Index of elements : " << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the array size:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << (i + 1) << " Element : ";
        cin >> arr[i];
    }
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int k;
    cout << "Enter Target Sum : ";
    cin >> k;

    cout << pairSum(arr, n, k) << endl;

    return 0;
}
