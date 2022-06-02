#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    /*
    string str;
    cout << "Enter a String\n";
    cin >> str;
    cout << "You Entered\n"
         << str;
    string str2 = "Bharat";
    cout << str2;
    */

    /*
     string str3;
     cout << "Enter String\n";
     getline(cin, str3);
     cout << str3 << endl;
     */

    /*
    string s1 = "Fam";
    string s2 = "ily";
    // s1.append(s2);
    // cout << s1 << endl;
    cout << s1 + s2 << endl;
    cout << s1[1] << endl;
    */

    /*
     string a = "Hello,This is Bharat";
     a.clear();
     cout << a << endl;
     */

    /*
    string s3 = "Hello";
    string s4 = "Namaskar";
    if (!s3.compare(s4))
    {
        cout << "Strings are equal";
    }
    else
    {
        cout << s4.compare(s3) << endl;
        cout << "Strings are not equal";
    }
    */

    /*
     string s5 = "Hello";
     cout << s5 << endl;

     s5.clear();

     if (s5.empty())
     {
         cout << "String is empty";
     }
     */

    /*
    string s6 = "Incomplete";

    s6.erase(0, 2);

    cout << s6 << endl;
    */

    /*
     string s7 = "Complete";

     cout << s7.find("plete") << endl;
     cout << s7.find("") << endl;
     */

    /*
    string s8 = "Bharat Sarma ";
    // cout << s8 << endl;
    s8.insert(8, "h");
    // cout << s8 << endl;
    // cout << s8.length() << endl;
    for (int i = 0; i < s8.length(); i++)
    {
        cout << s8[i] << endl;
    }
    */

    /*
     string s9 = "Coding Skills";
     string s10 = s9.substr(0, 6);
     cout << s10 << endl;
     */

    /*
    string s11 = "7000";
    int x = stoi(s11);
    cout << x << "192752" << endl;
    cout << x + 1 << endl;
    */

    /*
     int y = 6263;
     cout << to_string(y) + "859982" << endl;
     */

    string s12 = "he is a good boy";
    sort(s12.begin(), s12.end());
    cout << "Sorted String : " << s12 << endl;

    return 0;
}
