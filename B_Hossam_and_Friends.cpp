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
    ll n, m;
    cin >> n >> m;
    vector<int> suffix(n + 2, n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        // x--; y--;
        if (x > y)
            swap(x, y);
        suffix[x] = min(y, suffix[x]);
    }
    for (int i = n - 1; i >= 1; i--)
    {
        suffix[i] = min(suffix[i], suffix[i + 1]);
    }
    ll c = 0;
    for (int i = 1; i <= n; i++)
    {
        c += suffix[i] - i;
    }
    cout << c << endl;
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
