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
    ll n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    vector<ll> q;
    ll t = 1;
    while (t <= d)
    {
        q.push_back(t);
        if (t > d / n)
            break;
        t *= n;
    }
    ll res = 0;
    for (ll v : q)
    {
        ll mn = max(a, (c + v - 1) / v);
        ll mx = min(b, d / v);

        if (mn <= mx)
        {
            res += (mx - mn + 1);
        }
    }
    cout << res << endl;
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
