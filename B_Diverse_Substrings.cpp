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
    string s;
    cin >> s;
    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> um;
        int dist = 0, maxi = 0;
        for (int j = i; j <= n - 1; j++)
        {
            if (++um[s[j]] > 10)
                break;
            maxi = max(maxi, um[s[j]]);
            if (um[s[j]] == 1)
                dist++;
            if (dist >= maxi)
                c++;
        }
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
