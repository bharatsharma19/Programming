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

    int target;
    cout << "Enter Element you want to Search : ";
    cin >> target;

    int r = 0, c = m - 1;
    bool found = false;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == target)
        {
            found = true;
        }
        if (arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element does not exist";
    }

    return 0;
}
