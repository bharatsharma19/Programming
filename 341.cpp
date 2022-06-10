#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    int n = s.size();
    bool ans = true;
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    if (!st.empty())
    {
        return false;
    }

    return ans;
}

int main()
{
    string s = "{([)]}";

    if (isValid(s))
    {
        cout << "Valid String" << endl;
    }
    else
    {
        cout << "Invalid String" << endl;
    }

    return 0;
}
