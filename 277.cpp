#include <iostream>
using namespace std;

class mitsGwalior
{
public:
    void fun()
    {
        cout << "Function with no arguments" << endl;
    }
    void fun(int x)
    {
        cout << "Function with int arguments" << endl;
    }
    void fun(double x)
    {
        cout << "Function with double arguments" << endl;
    }
};

int main()
{
    mitsGwalior obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.36);

    return 0;
}
