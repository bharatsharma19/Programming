#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(6);
    s.insert(5);

    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    s.erase(6);
    s.erase(s.begin());

    for (auto i : s)
    {
        cout << i << " ";
    }

    return 0;
}
