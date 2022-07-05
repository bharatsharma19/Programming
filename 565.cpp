#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 1e3 + 2;

int dp[N][N];

int coinChange(vi &a, int n, int x)
{
    if (x == 0)
    {
        return 1;
    }
    if (x < 0)
    {
        return 0;
    }
    if (n <= 0)
    {
        return 0;
    }

    if (dp[n][x] != -1)
    {
        return dp[n][x];
    }

    dp[n][x] = coinChange(a, n, x - a[n - 1]) + coinChange(a, n - 1, x);

    return dp[n][x];
}

int main()
{
    rep(i, 0, N)
    {
        rep(j, 0, N)
        {
            dp[i][j] = (-1);
        }
    }

    int n;
    cout << "Enter a Number : ";
    cin >> n;

    vi a(n);

    rep(i, 0, n)
    {
        cout << "Enter : ";
        cin >> a[i];
    }

    int x;
    cout << "Enter X : ";
    cin >> x;

    cout << coinChange(a, n, x) << endl;

    return 0;
}
