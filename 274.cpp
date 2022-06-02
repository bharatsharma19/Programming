#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "Inherited" << endl;
    }
};

class B : public A
{
};

int main()
{
    B b;
    b.func();

    return 0;
}
