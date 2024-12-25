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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int count = 1;
    int ans = a * n;
    if (b >= 0)
    {
        ans += b * n;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                count++;
            }
        }
        count /= 2;
        ans += b * (count + 1);
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
