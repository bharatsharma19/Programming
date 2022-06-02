#include <iostream>
#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permute(a, idx + 1);
        swap(a[i], a[idx]);
    }
}

int32_t main()
{
    int n;
    cout << "Enter total numbers : ";
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cout << "Enter numbers : ";
        cin >> i;
    }
    cout << endl;

    sort(a.begin(), a.end());
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(), a.end()));

    cout << "Permutations are ->\n";
    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}
