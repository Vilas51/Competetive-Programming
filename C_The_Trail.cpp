#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i, a, b) for (ll i = a; i <= b; i++)
#define ff(i, a, b) for (ll i = a; i >= b; i--)
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    string p;
    cin >> p;
    int l = n + m - 1;
    vector<pair<int, int>> x;
    int r = 0, c = 0;
    x.push_back({r, c});
    for (auto q : p)
    {
        if (q == 'D')
            r++;
        else
            c++;
        x.push_back({r, c});
    }
    vector<vector<long long>> g(n, vector<long long>(m));
    vector<vector<bool>> y(n, vector<bool>(m, false));
    for (auto &z : x)
        y[z.first][z.second] = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> g[i][j];
    vector<long long> fr(n, 0), fc(m, 0);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!y[i][j])
                fr[i] += g[i][j], fc[j] += g[i][j];
    int v = n + m;
    vector<long long> b(v, 0);
    for (int i = 0; i < n; i++)
        b[i] = -fr[i];
    for (int j = 0; j < m; j++)
        b[n + j] = -fc[j];
    int e = l;
    vector<vector<pair<int, int>>> a(v);
    for (int i = 0; i < l; i++)
    {
        auto pr = x[i];
        int u = pr.first, v = n + pr.second;
        a[u].push_back({v, i});
        a[v].push_back({u, i});
    }
    vector<int> d(v, 0);
    for (int i = 0; i < v; i++)
        d[i] = a[i].size();
    vector<bool> ue(e, false);
    vector<long long> ev(e, 0);
    queue<int> q;
    vector<bool> iq(v, false), rm(v, false);
    for (int i = 0; i < v; i++)
        if (d[i] == 1)
            q.push(i), iq[i] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (rm[u] || d[u] == 0)
            continue;
        int ni = -1, ei = -1;
        for (auto &p : a[u])
            if (!ue[p.second])
            {
                ni = p.first;
                ei = p.second;
                break;
            }
        if (ei == -1)
            continue;
        ev[ei] = b[u];
        ue[ei] = true;
        rm[u] = true;
        d[u]--;
        d[ni]--;
        b[ni] -= ev[ei];
        if (d[ni] == 1 && !rm[ni] && !iq[ni])
            q.push(ni), iq[ni] = true;
    }
    for (int i = 0; i < l; i++)
    {
        auto pr = x[i];
        g[pr.first][pr.second] = ev[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << g[i][j] << (j + 1 == m ? "\n" : " ");
    }
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
