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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if(n==1){
        cout<<sum<<endl;
        return;
    }
    int minimum=*(min_element(v.begin(),v.end()));
    vector<ll> a(n);
    for (ll i = 1; i < n - 1; i++)
    {
        a[i] = min(v[i - 1], v[i + 1]);
    }
    a[0] = min(v[0], v[1]);
    a[n - 1] = min(v[n - 2], v[n - 1]);
    vector<ll> diff(n);
    for (ll i = 0; i < n; i++)
    {
        diff[i] =abs(v[i] - a[i]) ;
    }
    sort(diff.rbegin(), diff.rend());
    for (ll i = 0; i < min(n,k); i++)
    {
        sum -=diff[i];
    }
    cout<<sum<<endl;

    //DP
    
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
