#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    x = " " + x;
    vector<int> a(n + 2, n + 1);
    for (int i = n; i >= 1; i--)
    {
        if (x[i] == 'p')
            a[i] = i;
        else
            a[i] = a[i + 1];
    }
    vector<int> b(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 's')
            b[i] = i;
        else
            b[i] = b[i - 1];
    }
    vector<int> c(n);
    for (int i = 1; i <= n; i++)
    {
        int u = INT_MAX;
        if (a[i] <= n)
            u = a[i];
        int v = INT_MAX;
        if (b[i] >= 1)
            v = n - b[i] + 1;
        if (u != INT_MAX && v != INT_MAX)
            c[i - 1] = min(u, v);
        else if (u != INT_MAX)
            c[i - 1] = u;
        else if (v != INT_MAX)
            c[i - 1] = v;
        else
            c[i - 1] = n;
    }
    sort(c.begin(), c.end());
    bool f = true;
    for (int i = 1; i <= n; i++)
    {
        if (c[i - 1] < i)
        {
            f = false;
            break;
        }
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
