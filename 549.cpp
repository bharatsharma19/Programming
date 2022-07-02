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
bool bipart;
vector<int> col;
vector<bool> vis;
vector<vector<int>> adj(n);

void color(int u, int curr)
{
    if (col[u] != (-1) and col[u] != curr)
    {
        bipart = false;
        return;
    }

    col[u] = curr;

    if (vis[u])
    {
        return;
    }

    vis[u] = true;

    for (auto i : adj[u])
    {
        color(i, curr xor 1);
        // 0 xor 1 = 1
        // 1 xor 1 = 0
    }
}

signed main()
{
    bipart = true;

    cout << "Enter no. of vertices : ";
    cin >> n;
    cout << "Enter no. of edges : ";
    cin >> m;

    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, false);
    col = vector<int>(n, -1);

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
            color(i, 0);
        }
    }

    if (bipart)
    {
        cout << "Graph is bipartite" << endl;
    }
    else
    {
        cout << "Graph is not bipartite" << endl;
    }

    return 0;
}
