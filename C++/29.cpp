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

    Employee(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
    void printdetails()
    {
        cout << "The CEO is " << this->name << endl
             << "His annual turnover is " << this->salary << " Trillion Dollars";
    }
};
int main()
{

    Employee har("Bharat",876358);
    har.printdetails();

    return 0;
}