#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 1e3 + 2;

int main()
{
    int n;
    cout << "Enter number of Items : ";
    cin >> n;

    vi a(n);

    rep(i, 0, n)
    {
        cout << "Enter : ";
        cin >> a[i];
    }

    vi dp(n, 1);

    int ans = 0;

    rep(i, 1, n)
    {
        rep(j, 0, i)
        {
            if (a[i] > a[j])
            {
                dp[i] = max(dp[i], 1 + dp[j]);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;

    return 0;
}
