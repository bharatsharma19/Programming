#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter rows of Array : ";
    cin >> n;
    cout << "Enter columns of Array : ";
    cin >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter Element : ";
            cin >> arr[i][j];
        }
    }
    cout << endl
         << "Matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Swap
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout << endl;

    // Print

    cout << "Transpose of Matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
