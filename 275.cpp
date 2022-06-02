#include <iostream>
using namespace std;

class A
{
public:
    void Afunc()
    {
        cout << "\nFunc A\n";
    }
};

class B
{
public:
    void Bfunc()
    {
        cout << "\nFunc B\n";
    }
};

class C : public A, public B
{
public:
};

int main()
{
    C c;
    c.Afunc();
    c.Bfunc();

    return 0;
}
