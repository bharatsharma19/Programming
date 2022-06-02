#include <iostream>
#include <climits>
using namespace std;

bool pairSum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << "Index of elements : " << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
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
