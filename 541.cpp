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

vi adj[N];

signed main()
{
    int n, m;
    cout << "Enter No. of Nodes : ";
    cin >> n;
    cout << "Enter No. of edges : ";
    cin >> m;

    vvi adjm((n + 1), vi((n + 1), 0));

    rep(i, 0, m)
    {
        int x, y;
        cout << "Enter Edges : ";
        cin >> x >> y;

        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }

    cout << endl
         << "Adjacency Matrix of above graph is given by\n";

    rep(i, 1, n + 1)
    {
        rep(j, 1, n + 1)
        {
            cout << adjm[i][j] << " ";
        }
        cout << endl;
    }
    cout
        << endl;

    if (adjm[3][7] == 1)
    {
        cout << "There is a edge b/w 3 & 7" << endl;
    }
    else
    {
        cout << "No Edge" << endl;
    }
    cout << endl
         << endl;

    cout << "Enter No. of Nodes : ";
    cin >> n;
    cout << "Enter No. of edges : ";
    cin >> m;

    rep(i, 0, m)
    {
        int x, y;
        cout << "Enter Edges : ";
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout << endl;

    cout << "Adjacency list of above graph is given by\n";

    rep(i, 1, n + 1)
    {
        cout << i << " -> ";

        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
