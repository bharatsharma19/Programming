#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep1(i, a, b) for (int i = a; i <= b; i++)

const int N = 1e9;

int main()
{
    int n = 5, W = 11;

    vi wt = {3, 2, 4, 5, 1};
    vi val = {4, 3, 5, 6, 1};
    vi dp(W + 1, 0);

    rep1(j, 0, W)
    {
        rep(i, 0, n)
        {
            if (j - wt[i] >= 0)
            {
                dp[j] = max(dp[j], val[i] + dp[j - wt[i]]);
            }
        }
    }

    cout << dp[W] << endl;

    return 0;
}
