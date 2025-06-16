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
    if (s == "codeforces")
    {
        cout << "NO" << endl;
        return;
    }
    bool f = 0;
    bool f2 = 0;
    map<string, int> mp;
    for (int i = 1; i < n; i++)
    {
        string curr = "";
        curr += s[i - 1] + s[i];
        if (mp.find(curr) != mp.end())
        {
            if (mp[curr] < i - 1)
            {
                f = 1;
                continue;
            }

            // cout<<i<<" "<<curr<<" ";
        }
        else
            mp[curr] = i;
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
