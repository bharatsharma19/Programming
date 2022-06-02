#include <iostream>
#include <string>
using namespace std;
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
class Employee
{
public:
    string name;
    int salary;
    void printdetails()
    {
        cout << "The CEO is " << this->name << endl
             << "His annual turnover is " << this->salary << " Trillion Dollars";
    }
};
int main()
{

    Employee har;
    har.name = "Bharat";
    har.salary = 580000000;
    har.printdetails();
}