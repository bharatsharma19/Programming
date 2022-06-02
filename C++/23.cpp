#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=45 ;
    int * ptra;
    ptra = &a;
    cout<<*ptra;

    return 0;
}