#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void custs();
struct bank
{
    string name;
    int id;
    float baln;
    char nam[20];
} c[4];

int main()
{
    int i;
    for (i = 0; i < 4; i++)
    {
        cout << "Enter " << i + 1 << " Customer details\n";
        cout << "Enter First Customer Name: ";
        cin >> c[i].nam;
        cout << "Enter Account Number: ";
        cin >> c[i].id;
        cout << "Enter Balance in Account: ";
        cin >> c[i].baln;
        cout << "\n";
    }
    custs();

    return 0;
}

void custs()
{

    int i;
    cout << ":customer Details:\n";
    for (i = 0; i < 4; i++)
    {
        if (c[i].baln < 1000)
        {
            cout << "Customer Name is: " << c[i].nam << endl;
            cout << "Customer Account No. id: " << c[i].id << endl;
            cout << "Customer Balance is: " << c[i].baln;
            cout << endl;
        }
    }
    cout << endl;
}
