#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers for comparison\n";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "Biggest Number is " << a << endl;
        }
        else
        {
            cout << "Biggest Number is " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Biggest Number is " << b << endl;
        }
        else
        {
            cout << "Biggest Number is " << c << endl;
        }
    }
    return 0;
}
