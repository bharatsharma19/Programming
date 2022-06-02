#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1;
    cout << "Enter a String : ";
    cin >> s1;

    sort(s1.begin(), s1.end(), greater<int>());
    cout << s1 << endl;

    return 0;
}
