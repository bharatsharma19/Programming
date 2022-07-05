#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 1e9;

int main()
{
    int n;
    cout << "Enter total elements : ";
    cin >> n;

    vi arr(n);
    for (auto &i : arr)
    {
        cout << "Enter : ";
        cin >> i;
    }

    vi jumps(n, N);

    if (arr[0] == 0)

    {
        cout << N << " ";
        return 0;
    }

    jumps[0] = 0;

    rep(i, 1, n)
    {
        rep(j, 0, i)
        {
            if (i <= (j + arr[j]))
            {
                jumps[i] = min(jumps[i], jumps[j] + 1);
            }
        }
    }

    cout << jumps[n - 1];

    return 0;
}
