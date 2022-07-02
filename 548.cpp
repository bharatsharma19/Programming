#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

int n, m;
vector<bool> vis;
vector<vector<int>> adj(n);
vector<int> components;

int get_comp(int idx)
{
    if (vis[idx])
    {
        return 0;
    }
    vis[idx] = true;
    int ans = 1;

    for (auto i : adj[idx])
    {
        if (!vis[i])
        {
            ans += get_comp(i);
            vis[i] = true;
        }
    }
    return ans;
}

signed main()
{
    cout << "Enter no. of vertices : ";
    cin >> n;
    cout << "Enter no. of edges : ";
    cin >> m;

    adj = vector<vector<int>>(n);
    vis = vector<bool>(n);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter Edges : ";
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            components.push_back(get_comp(i));
        }
    }

    long long ans = 0;

    for (auto i : components)
    {
        ans += i * (n - i);
    }
    cout << (ans / 2) << endl;

    return 0;
}
