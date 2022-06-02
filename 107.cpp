#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1;
    cout << "Enter a String : ";
    cin >> s1;

    // Convert to Upper Case
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] -= 32;
        }
    }
    cout << "Uppercase : " << s1 << endl;

    // Convert to Lower Case
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] += 32;
        }
    }
    cout << "Lowercase : " << s1 << endl;

    return 0;
}
