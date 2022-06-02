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

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }
    void printdetails()
    {
        cout << "The CEO is " << this->name << endl
             << "His annual turnover is " << this->salary << " Trillion Dollars" << endl;
    }

    void getsecretPassword()
    {
        cout << "The Secret Password of CEO is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

class Programmer : public Employee
{
    public:
    int errors;
};

int main()
{

    Employee har("Bharat", 876358, 246549);
    har.printdetails();
    har.getsecretPassword();

    return 0;
}