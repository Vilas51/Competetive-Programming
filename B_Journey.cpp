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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll p = a + b + c;
    ll cyc = n / p;
    ll discov = cyc * p;
    ll rem = n - discov;
    if (rem <= 0)
    {
        cout << 3 * cyc << endl;
    }
    else if (rem <= a)
    {
        cout << 3 * cyc + 1 << endl;
    }
    else if (rem <= a + b)
    {
        cout << 3 * cyc + 2 << endl;
    }
    else
    {
        cout << 3 * cyc + 3 << endl;
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
