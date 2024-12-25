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
    ll a, b, c;
    cin >> a >> b >> c;
    if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0 || a % 2 == 0 && c % 2 != 0 || c % 2 == 0 && a % 2 != 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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
