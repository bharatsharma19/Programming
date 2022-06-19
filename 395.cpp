#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    cout << "Enter String : ";
    cin >> s;

    vector<int> dict(256, -1);
    int maxlength = 0, start = -1;

    for (int i = 0; i < s.size(); i++)
    {
        if (dict[s[i]] > start)
        {
            start = dict[s[i]];
        }
        dict[s[i]] = i;
        maxlength = max(maxlength, i - start);
    }
    cout << maxlength << endl;

    return 0;
}
