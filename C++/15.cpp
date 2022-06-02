#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4} ;

    int marks[6];

    for (int i = 0; i < 6; i++)
    {
        cout<<"Enter the marks of "<<i<<"th student"<<endl;
        cin>>marks[i];
    }
    
    return 0;
}