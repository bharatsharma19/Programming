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

const int N = 1e5 + 2, MOD = 1e9 + 7;
bool vis[N];
vi adj[N];

signed main()
{
    int n, m;
    cout << "Enter no. of vertices : ";
    cin >> n;
    cout << "Enter no. of edges : ";
    cin >> m;

    int cnt = 0;

    vector<vector<int>> adj_list(n);
    vector<int> indeg(n, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter Edges : ";
        cin >> u >> v;
        // u --> v
        adj[u].push_back(v);
        indeg[v]++;
    }

    queue<int> pq;

    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            pq.push(i);
        }
    }
    while (!pq.empty())
    {
        cnt++;
        int x = pq.front();
        pq.pop();
        cout << x << " ";
        // x --> v
        for (auto it : adj[x])
        {
            indeg[it]--;

            if (indeg[it] == 0)
            {
                pq.push(it);
            }
        }
    }

    return 0;
}
