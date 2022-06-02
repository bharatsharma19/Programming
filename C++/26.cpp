#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=45 ;
    float b=56.29;
    int * ptra;
    ptra = &a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<(float) b<<endl;
    cout<<"The value of a is "<<*ptra<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<&*ptra<<endl;
    cout<<"The address of b is "<<&b<<endl;

    return 0;
}