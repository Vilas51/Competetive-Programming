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
    int n;
    cin >> n;
    vector<int> v(n), freq(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            cout << i << endl;
            return;
        }
        else if (freq[i] == 1)
        {
            if (ans == 0)
            {
                ans = 1;
            }
            else
            {
                cout << i << endl;
                return;
            }
        }
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
