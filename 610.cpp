#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2, MOD = 1e9 + 7;
int a[N];
pair<int, int> tree[4 * N];

void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node].first = a[start];
        tree[node].second = 1;
        return;
    }

    int mid = (start + end) / 2;

    build(2 * node, start, mid);
    build((2 * node) + 1, mid + 1, end);

    if (tree[2 * node].first < tree[2 * node + 1].first)
    {
        tree[node].first = tree[2 * node].first;
        tree[node].second = tree[2 * node].second;
    }
    else if (tree[2 * node + 1].first < tree[2 * node].first)
    {
        tree[node].first = tree[2 * node + 1].first;
        tree[node].second = tree[2 * node + 1].second;
    }
    else
    {
        tree[node].first = tree[2 * node].first;
        tree[node].second = tree[2 * node].second + tree[2 * node + 1].second;
    }
}

pair<int, int> query(int node, int st, int en, int l, int r)
{
    if (st > r || en < l)
    {
        return {MOD, -1};
    }

    if (l <= st && en <= r)
    {
        return tree[node];
    }

    int mid = (st + en) / 2;

    pair<int, int> q1 = query(2 * node, st, mid, l, r);
    pair<int, int> q2 = query((2 * node) + 1, mid + 1, en, l, r);

    pair<int, int> q;

    if (q1.first < q2.first)
    {
        q = q1;
    }
    else if (q2.first < q1.first)
    {
        q.first = q1.first;
        q.second = q1.second + q2.second;
    }

    return q;
}

void update(int node, int st, int end, int idx, int val)
{
    if (st == end)
    {
        a[st] = val;
        tree[node].first = val;
        tree[node].second = 1;

        return;
    }

    int mid = (st + end) / 2;

    if (idx <= mid)
    {
        update(2 * node, st, mid, idx, val);
    }
    else
    {
        update((2 * node) + 1, mid + 1, end, idx, val);
    }

    if (tree[2 * node].first < tree[2 * node + 1].first)
    {
        tree[node].first = tree[2 * node].first;
        tree[node].second = tree[2 * node].second;
    }
    else if (tree[2 * node + 1].first < tree[2 * node].first)
    {
        tree[node].first = tree[2 * node + 1].first;
        tree[node].second = tree[2 * node + 1].second;
    }
    else
    {
        tree[node].first = tree[2 * node].first;
        tree[node].second = tree[2 * node].second + tree[2 * node + 1].second;
    }
}

signed main()
{
    int n, m;
    cout << "Enter n & m : ";
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    build(1, 0, (n - 1));

    while (m--)
    {
        int type;
        cout << "Enter Condition : ";
        cin >> type;

        if (type == 1)
        {
            int idx, val;
            cout << "Enter idx & val : ";
            cin >> idx >> val;

            update(1, 0, n - 1, idx, val);
        }
        else if (type == 2)
        {
            int l, r;
            cout << "Enter l & r : ";
            cin >> l >> r;

            pair<int, int> ans = query(1, 0, n - 1, l, r - 1);
            cout << ans.first << " " << ans.second << endl;
        }
    }

    return 0;
}
