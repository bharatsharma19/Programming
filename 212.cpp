#include <iostream>
using namespace std;

void inc(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }

    inc(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    inc(n);

    return 0;
}
