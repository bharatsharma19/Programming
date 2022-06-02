#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
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

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(arr, n);
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadane(arr, n);

    cout << "Maximum Sum of Subarray is " << max(wrapSum, nonWrapSum) << endl;

    return 0;
}
