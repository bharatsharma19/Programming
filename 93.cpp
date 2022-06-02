#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter row of Matrix : ";
    cin >> n;
    cout << "Enter column of Matrix : ";
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

    return 0;
}
