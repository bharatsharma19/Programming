#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main()
{
    int t;
    cout << "Enter T : ";
    cin >> t;

    while (t--)
    {
        int n;
        cout << "Enter no. of stops : ";
        cin >> n;

        vector<pair<int, int>> a(n);

        rep(i, 0, n)
        {
            cout << "Enter : ";
            cin >> a[i].ff >> a[i].ss;
        }

        int l, p;
        cout << "Enter l & p : ";
        cin >> l >> p;

        rep(i, 0, n)
        {
            a[i].ff = l - a[i].ff;
        }

        sort(a.begin(), a.end());

        int ans = 0;

        int curr = p;

        priority_queue<int, vector<int>> pq;

        bool flag = 0;

        rep(i, 0, n)
        {
            if (curr >= l)
            {
                break;
            }

            while (curr < a[i].ff)
            {
                if (pq.empty())
                {
                    flag = 1;
                    break;
                }
                ans++;

                curr += pq.top();

                pq.pop();
            }
            if (flag)
            {
                break;
            }
            pq.push(a[i].ss);
        }

        if (flag)
        {
            cout << "-1" << endl;
            continue;
        }

        while (!pq.empty() && curr < l)
        {
            curr += pq.top();
            pq.pop();
            ans++;
        }

        if (curr < l)
        {
            cout << "-1" << endl;
            continue;
        }

        cout << ans << endl;
    }

    return 0;
}
