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

// ll sol2(ll ind,ll k,ll sum,vector<ll>&v,vector<ll>&dp){
//     if(ind==v.size())return 0;
//     if(dp[ind]!=-1)return dp[ind];
//     ll take=v[ind]*k+sol2(ind+1,k+1,sum,v,dp);
//     ll nottake=v[ind]*k+sol2(ind+1,k,sum,v,dp);
//     // cout<<max(take,nottake)<<" ";
//     return dp[ind]=max(take,nottake);
// }

ll sol2(ll ind, ll k, vector<ll> &v, vector<vector<ll>> &dp)
{ // MLE
    if (ind == v.size())
        return 0;
    if (dp[ind][k] != -1)
        return dp[ind][k];
    ll take = v[ind] * k + sol2(ind + 1, k + 1, v, dp);
    ll start_new = v[ind] * k + sol2(ind + 1, k, v, dp);
    return dp[ind][k] = max(take, start_new);
}
//    vector<vector<ll>> dp(n, vector<ll>(n + 1, -1));
//    cout<<sol2(0,1,v,dp)<<endl;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    vector<ll> suffix(n, 0);
    suffix[n - 1] = v[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + v[i];
    }
    ll sum = suffix[0];
    for (int i = 1; i < n; i++)
    {
        if (suffix[i] > 0)
            sum += suffix[i];
    }
    cout << sum << endl;
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
