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
    ll n;
    cin >> n;
    if (n % 2 != 0)
    {
        for (int i = 0; i < n; i++)
            cout << 7 << " ";
    }
    else
    {
        ll till = n * 3;
        for (int i = 0; i < n - 2; i++)
            cout << 2 << " ";
        cout << 3 << " ";
        cout << 1 << " ";
    }
    cout << endl;
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
