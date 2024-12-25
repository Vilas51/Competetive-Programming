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
bool can_form_teams(int c, int m, int x, int teams)
{
    return (teams <= c && teams <= m && c + m + x >= 3 * teams);
}
void solve()
{
       ll c, m, x;
        cin >> c >> m >> x;
        ll max_teams = min({c, m, (c + m + x) / 3});
        cout << max_teams << endl;
    // ll c, m, x;
    // cin >> c >> m >> x;
    // ll low = 0, high = 1000000000;
    // ll result = 0;
    // while (low <= high)
    // {
    //     ll mid = (low + high) / 2;
    //     if (can_form_teams(c, m, x, mid))
    //     {
    //         result = mid;
    //         low = mid + 1;
    //     }
    //     else
    //     {
    //         high = mid - 1;
    //     }
    // }
    // cout << result << endl;
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
