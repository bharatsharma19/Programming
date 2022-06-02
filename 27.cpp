#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Input a Character:";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;

    case 'b':
        cout << "Namaste" << endl;
        break;

    case 'c':
        cout << "Ciao" << endl;
        break;

    case 'd':
        cout << "Ram-Ram" << endl;
        break;

    default:
        cout << "I am still learning more" << endl;
        break;
    }

    return 0;
}
