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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll lo = 1, hi = 1e13;
    ll ans = 0;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2;
        vector<ll> temp = v;
        ll rem = k;
        bool is_possible = true;
        ll permcanform = 0;
        for (ll i = 0; i < n; i++)
        {
            if (temp[i] < mid)
            {
                ll diff = mid - temp[i];
                if (rem >= diff)
                {
                    rem -= diff;
                    temp[i] = mid;
                }
                else
                {
                    is_possible = false;
                    break;
                }
            }
        }

        if (is_possible)
        {
            for (ll i = 0; i < n; i++)
            {
                if (temp[i] > mid)
                {
                    permcanform++;
                }
            }
            permcanform += rem;
            ans = max(ans, permcanform + (mid * n) - n + 1);
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << ans << endl;
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
