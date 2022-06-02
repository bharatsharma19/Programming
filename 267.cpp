#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);

    /*
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    */

    v.pop_back();

    vector<int> v2(3, 32);

    swap(v, v2);

    v.pop_back();
    v.pop_back();

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
