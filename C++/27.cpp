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
};
int main()
{

    Employee har;
    har.name = "Bharat";
    har.salary = 580000000;
    cout << "The CEO is " << har.name << endl
         << "His annual turnover is " << har.salary << " Trillion Dollars";
}