#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 102, MOD = 1e9 + 7;
int a[N];
int dp[N][N];

int mcm(int i, int j)
{
    if (i == j)
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    dp[i][j] = MOD;

    rep(k, i, j)
    {
        dp[i][j] = min(dp[i][j], mcm(i, k) + mcm(k + 1, j) + a[i - 1] * a[k] * a[j]);
    }

    return dp[i][j];
}

signed main()
{
    int n;
    cout << "Enter Matrix Size : ";
    cin >> n;

    memset(dp, -1, sizeof dp);

    rep(i, 0, n)
    {
        cout << "Enter Element : ";
        cin >> a[i];
    }

    cout << mcm(1, n - 1) << endl;

    return 0;
}
