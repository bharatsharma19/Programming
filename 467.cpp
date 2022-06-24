#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(2);
    ms.insert(5);

    for (auto i : ms)
    {
        cout << i << " ";
    }

    cout << endl;

    ms.erase(2);
    ms.erase(ms.begin());
    for (auto i : ms)
    {
        cout << i << " ";
    }

    cout << endl;

    ms.insert(3);
    ms.insert(2);
    ms.insert(5);
    ms.insert(2);

    ms.erase(ms.find(2));

    for (auto i : ms)
    {
        cout << i << " ";
    }

    return 0;
}
