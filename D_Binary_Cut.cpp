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
    string s;
    cin >> s;
    int n = s.size();
    int ans = 1;
    bool f = 0, f2 = 0;
    int i = 0;
    int c = 0;
    while (i < n)
    {
        if (s[i] == '0')
        {
            c++;
            while (i < n && s[i] == '0')
            {
                i++;
            }
            if(i!=n)f2=1;
        }
        else{
            c++;
            while (i < n && s[i] == '1')
            {
                i++;
            }
        }
    }
    cout << c - f2 << endl;
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
