#include <iostream>
#include <stack>
using namespace std;

int main()
{
    bool ans = false;

    string s;
    cout << "Enter String\n";
    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                ans = true;
            }

            while (st.top() == '+' or st.top() == '-' or s[i] == '*' or s[i] == '/')
            {
                st.pop();
            }
            st.pop();
        }
    }

    cout << ans << endl;

    return 0;
}
