#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Enter A:";
    cin >> a;
    cout << "Enter B:";
    cin >> b;

    char op;
    cout << "Input an Operator:";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Sum is " << (a + b);
        break;

    case '-':
        cout << "Difference is " << (a - b);
        break;

    case '*':
        cout << "Multiplication is " << (a * b);
        break;

    case '/':
        cout << "Division is " << (a / b);
        break;

    default:
        cout << "Enter another Operator";
        break;
    }
}
