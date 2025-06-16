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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    unordered_map<int,int>um;
    for (ll i = 0; i < n; i++)
    {   
        int x=v[i];
        while(um.find(x)!=um.end()&&um[x]>=2){
            x++;
        }
        v[i]=x;
        um[x]++;
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    for (auto x : mp)
    {
        if (x.second % 2 != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
