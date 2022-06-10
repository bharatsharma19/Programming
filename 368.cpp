#include <iostream>
#include <vector>
#include <set>
#include <deque>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter number of elements in array : ";
    cin >> n;
    cout << "Enter window size : ";
    cin >> k;

    vector<int> a(n);

    cout << "Enter elements \n";
    for (auto &i : a)
    {
        cin >> i;
    }

    deque<int> q;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        while (!q.empty() and a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);

    for (int i = k; i < n; i++)
    {
        if (q.front() == i - k)
        {
            q.pop_front();
        }
        while (!q.empty() and a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
