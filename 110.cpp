#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1;
    cout << "Enter a String : ";
    cin >> s1;

    int freq[32];

    for (int i = 0; i < 32; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s1.size(); i++)
    {
        freq[s1[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 32; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << maxF << " " << endl
         << ans << endl;

    return 0;
}
