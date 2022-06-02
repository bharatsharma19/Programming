#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=45 ;
    int * ptra;
    ptra = &a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*ptra<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<&*ptra<<endl;

    return 0;
}