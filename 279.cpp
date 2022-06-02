#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "Print function of base class" << endl;
    }

    void display()
    {
        cout << "Display function of base class" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "Print function of derived class" << endl;
    }

    void display()
    {
        cout << "Display function of derived class" << endl;
    }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr->print();
    baseptr->display();

    return 0;
}
