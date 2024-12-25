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
    vector<int> v(n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
        {
            c++;
        }
    }
    if (c == n)
    {
        cout << 0 << endl;
        return;
    }
    if (n <=2)
    {
        cout << 1 << endl;
        return;
    }
    int ans = 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] != 0 && v[i] == 0)
        {
           while(i<n){
            if(v[i]!=0){
                ans=2;
                break;
            }
            i++;
           }
        }
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
