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
    int n, k;
    cout << "Enter N : ";
    cin >> n;
    cout << "Enter K : ";
    cin >> k;

    vi a(n);

    rep(i, 0, n)
    {
        cout << "Enter Element : ";
        cin >> a[i];
    }

    int s = 0, ans = INT_MAX;
    rep(i, 0, k)
    {
        s += a[i];
    }
    cout << s << " ";

    ans = min(ans, s);

    rep(i, 1, n - k + 1)
    {
        s -= a[i - 1];
        s += a[i + k - 1];
        ans = min(ans, s);
        cout << s << " ";
    }

    cout << endl
         << ans << endl;

    return 0;
}
