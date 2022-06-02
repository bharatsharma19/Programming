#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter row of Array : ";
    cin >> n;
    cout << "Enter column of Array : ";
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

    int x;
    cout << "Enter element to search : ";
    cin >> x;

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << "\n";
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "Element is found\n";
    }
    else
    {
        cout << "Element is not found\n";
    }

    return 0;
}
