#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter A:";
    cin >> n;

    if (n > 10)
    {
        cout << "More than 10" << endl;
    }
    else if (n < 10)
    {
        cout << "Less than 10" << endl;
    }
    else
    {
        cout << "Equal to 10" << endl;
    }
    return 0;
}
