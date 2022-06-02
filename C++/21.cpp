#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "Bharat";
    cout << "My name is " << name << endl;
    cout << "The length of name is " << name.length() << endl;
    cout << "The substring is " << name.substr(0, 4) << endl;

    return 0;
}