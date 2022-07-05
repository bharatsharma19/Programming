#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 1e5 + 2, MOD = 1e9 + 7;

int minSquare(int n)
{
    if (n == 1 || n == 2 || n == 3 || n == 0)
    {
        return n;
    }

    int ans = MOD;

    for (int i = 1; i * i <= n; i++)
    {
        ans = min(ans, 1 + minSquare(n - i * i));
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    cout << minSquare(n) << endl;

    return 0;
}
