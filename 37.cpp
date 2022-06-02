#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter number of rows:";
    cin >> row;
    cout << "Enter number of columns:";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
