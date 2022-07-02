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

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &stack)
{
    stack[src] = true;

    if (!visited[src])
    {
        visited[src] = true;

        for (auto i : adj[src])
        {
            if (!visited[i] and isCycle(i, adj, visited, stack))
            {
                return true;
            }
            if (stack[i])
            {
                return true;
            }
        }
    }
    stack[src] = false;
    return false;
}

signed main()
{
    int n, m;
    cout << "Enter no. of vertices : ";
    cin >> n;
    cout << "Enter no. of edges : ";
    cin >> m;

    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter Edges : ";
        cin >> u >> v;
        adj[u].push_back(v);
    }

    bool cycle = false;

    vector<int> stack(n, 0);

    vector<bool> visited(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] and isCycle(i, adj, visited, stack))
        {
            cycle = true;
        }
    }

    if (cycle)
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "Cycle is not present" << endl;
    }

    return 0;
}
