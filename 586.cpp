#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int n, m, k;
vector<int> a, b;

int solve(int i, int j, int k)
{
    if (i == n || j == m)
    {
        return 0;
    }

    int c1(0), c2(0), c3(0);

    if (a[i] == b[j])
    {
        c1 = 1 + solve(i + 1, j + 1, k);
    }
    if (k > 0)
    {
        c2 = 1 + solve(i + 1, j + 1, k - 1);
    }
    c3 = max(solve(i + 1, j, k), solve(i, j + 1, k));

    return max({c1, c2, c3});
}

int main()
{
    cout << "Enter n,m & k\n";
    cin >> n >> m >> k;

    a = vector<int>(n);
    b = vector<int>(m);

    for (auto &i : a)
    {
        cout << "Enter\n";
        cin >> i;
    }
    for (auto &i : b)
    {
        cout << "Enter\n";
        cin >> i;
    }

    cout << solve(0, 0, k);

    return 0;
}
