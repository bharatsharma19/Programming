#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    do
    {
        cout << "Enter a Negative Number for program termination : ";
        cin >> n;
    } while (n > 0);

    return 0;
}
