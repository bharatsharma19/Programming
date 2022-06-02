#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    switch (age)
    {
    case 16:
        cout << "You are 16 years old" << endl ;
        break;

    case 18:
        cout << "You are 18 years old" << endl;
        break;

    default:
        cout << "You are neither 16 nor 18" << endl;
        break;
    }

    return 0;
}