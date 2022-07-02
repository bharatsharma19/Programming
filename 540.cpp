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
    int n;
    cout << "Enter Size of array : ";
    cin >> n;

    vector<int> a(n);

    for (auto &i : a)
    {
        cout << "Enter element : ";
        cin >> i;
    }

    sort(a.begin(), a.end());

    long long mn = 0, mx = 0;

    for (int i = 0; i < n / 2; i++)
    {
        mx += (a[i + n / 2] - a[i]);
        mn += (a[2 * i + 1] - a[2 * i]);
    }

    cout << mn << " " << mx << endl;

    return 0;
}
