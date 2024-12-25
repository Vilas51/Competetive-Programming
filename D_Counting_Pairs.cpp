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
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    ll totalsum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        totalsum += a[i];
    }
    sort(a.begin(), a.end());
    ll minsum = totalsum - y;
    ll maxsum = totalsum - x;
    ll interestingPairs = 0;
    for (int i = 0; i < n; i++)
    {
        ll minvalue = minsum - a[i];
        ll maxvalue = maxsum - a[i];
        if (minvalue > maxvalue)
            continue;
        auto lower = lower_bound(a.begin() + i + 1, a.end(), minvalue);
        auto upper = upper_bound(a.begin() + i + 1, a.end(), maxvalue);
        interestingPairs += (upper - lower);
        cout << interestingPairs << " ";
    }
    cout << interestingPairs << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
