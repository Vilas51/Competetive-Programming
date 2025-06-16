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
    bool flag = 0;
    int n = s.size();
    ll count = 0;
    bool f2=0;
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (s[i] == '_')
            {
                count = 1;
                flag = 0;
            }
            else
            {
                count = 0;
                flag = 1;
                f2=1;
            }
        }
        if (s[i] == '_')
        {
            count++;
            if(i==n-1&&!f2){
                count++;
            }
            flag = 0;
        }
        else
        {
            if (!flag)
            {
                count--;
            }
            flag = 1;
            f2=1;
        }
        // cout<<count<<" ";
    }
    if (n == 1 && s[0] == '^')
        count = 1;
    if(n == 1 && s[0] == '_')
        count=2;
    cout << count << endl;
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
