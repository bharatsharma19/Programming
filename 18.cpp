#include <iostream>
using namespace std;

int main()
{
    int savings;
    cout << "Enter amount : ";
    cin >> savings;

    if (savings > 5000)
    {
        if (savings > 10000)
        {
            cout << "Road trip\n";
        }
        else
        {
            cout << "Stay at home\n";
        }
    }
    else if (savings > 2000)
    {
        cout << "B\n";
    }
    else
    {
        cout << "C\n";
    }
    return 0;
}
