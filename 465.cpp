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

    cout << *s.lower_bound(2) << "\n";
    cout << *s.lower_bound(2) << "\n";
    cout << *s.upper_bound(3) << "\n";
    cout << (s.upper_bound(4) == s.end()) << "\n";

    return 0;
}
