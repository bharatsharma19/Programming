#include <iostream>
#include <vector>
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

signed main()
{
    int n;
    cout << "Enter Matrix Size : ";
    cin >> n;

    rep(i, 0, n)
    {
        cout << "Enter Element : ";
        cin >> a[i];
    }

    rep(i, 1, n)
    {
        dp[i][i] = 0;
    }

    rep(l, 2, n)
    {
        rep(i, 1, n - l + 1)
        {
            int j = i + l - 1;

            dp[i][j] = MOD;

            rep(k, i, j)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + a[i - 1] * a[k] * a[j]);
            }
        }
    }

    cout << dp[1][n - 1] << endl;

    return 0;
}
