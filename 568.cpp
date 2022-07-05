#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 1e3 + 2;

int dp[N];

int lis(vi &a, int n)
{
    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = 1; // Single element is also lis

    rep(i, 0, n)
    {
        if (a[n] > a[i])
        {
            dp[n] = max(dp[n], 1 + lis(a, i));
        }
    }

    return dp[n];
}

int main()
{
    rep(i, 0, N)
    {
        dp[i] = -1;
    }

    int n;
    cout << "Enter number of Items : ";
    cin >> n;

    vi a(n);

    rep(i, 0, n)
    {
        cout << "Enter : ";
        cin >> a[i];
    }

    cout << lis(a, n - 1) << endl;

    return 0;
}
