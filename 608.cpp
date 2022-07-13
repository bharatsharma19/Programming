#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;
int a[N], tree[4 * N];

void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node] = a[start];
        return;
    }

    int mid = (start + end) / 2;

    build(2 * node, start, mid);
    build((2 * node) + 1, mid + 1, end);

    tree[node] = tree[2 * node] + tree[(2 * node) + 1];
}

int query(int node, int st, int en, int l, int r)
{
    if (st > r || en < l)
    {
        return 0;
    }

    if (l <= st && en <= r)
    {
        return tree[node];
    }

    int mid = (st + en) / 2;

    int q1 = query(2 * node, st, mid, l, r);
    int q2 = query((2 * node) + 1, mid + 1, en, l, r);

    return q1 + q2;
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    build(1, 0, (n - 1));

    while (1)
    {
        int type;
        cout << "Enter Condition : ";
        cin >> type;

        if (type == -1)
        {
            break;
        }

        if (type == 1)
        {
            int l, r;
            cout << "Enter l & r : ";
            cin >> l >> r;

            int ans = query(1, 0, (n - 1), l, r);

            cout << ans << endl;
        }
    }

    return 0;
}
