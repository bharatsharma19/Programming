#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int power(int a, int n)
{
    a %= MOD;

    int ans = 1;

    while (n > 0)
    {
        if (n & 1)
        {
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        n = n >> 1;
    }

    return ans;
}

int main()
{
    int a, n;
    cout << "Enter Base : ";
    cin >> a;
    cout << "Enter Power : ";
    cin >> n;

    cout << power(a, n) << endl;

    return 0;
}
