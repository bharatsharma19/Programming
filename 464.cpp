#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int, greater<int>> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
