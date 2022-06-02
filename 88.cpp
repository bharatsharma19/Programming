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

    int currSum[n + 1];
    currSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        currSum[i] = currSum[i - 1] + arr[i - 1];
    }
    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout << "Maximum Sum of Subarray is " << maxSum << endl;

    return 0;
}
