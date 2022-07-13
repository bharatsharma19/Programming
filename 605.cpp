#include <iostream>
using namespace std;

int main()
{
    int lo = 1, hi = 1000000;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        cout << mid << endl;
        cout << flush;

        string s;
        cout << "Enter String : ";
        cin >> s;

        if (s == "<")
        {
            hi = mid - 1;
        }
        else
        {
            ans = max(ans, mid);
            lo = mid + 1;
        }
    }

    cout << "! " << ans << endl;
    cout << flush;

    return 0;
}
