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
    int n;
    cout << "Enter total elements in array : ";
    cin >> n;

    vi a(n);

    rep(i, 0, n)
    {
        cout << "Enter element : ";
        cin >> a[i];
    }

    int curr = 0, maxTillNow = 0;

    rep(i, 0, n)
    {
        curr += a[i];

        maxTillNow = max(curr, maxTillNow);

        if (curr < 0)
        {
            curr = 0;
        }
    }

    cout << maxTillNow << endl;

    return 0;
}
