#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    while (n > 0)
    {
        cout << "Enter a Negative Number for program termination : ";
        cin >> n;
    }

    return 0;
}
