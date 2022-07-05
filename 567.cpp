#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 1e3 + 2;
int val[N], wt[N];

int dp[N][N];

int Knapsack(int n, int w)
{
    if (w <= 0)
    {
        return 0;
    }

    if (n <= 0)
    {
        return 0;
    }

    if (dp[n][w] != (-1))
    {
        return dp[n][w];
    }

    if (wt[n - 1] > w)
    {
        dp[n][w] = Knapsack(n - 1, w);
    }
    else
    {
        dp[n][w] = max(Knapsack(n - 1, w), Knapsack(n - 1, w - wt[n - 1]) + val[n - 1]);
    }

    return dp[n][w];
}

int main()
{
    rep(i, 0, N)
    {
        rep(j, 0, N)
        {
            dp[i][j] = -1;
        }
    }

    int n;
    cout << "Enter number of Items : ";
    cin >> n;

    rep(i, 0, n)
    {
        cout << "Enter Weight : ";
        cin >> wt[i];
    }

    rep(i, 0, n)
    {
        cout << "Enter Value : ";
        cin >> val[i];
    }

    int w;
    cout << "Enter Weight of Sack : ";
    cin >> w;

    cout << Knapsack(n, w) << endl;

    return 0;
}
