#include <iostream>
#include <climits>
using namespace std;
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

    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }

    cout << "Maximum Sum of Subarray is " << maxSum << endl;

    return 0;
}
