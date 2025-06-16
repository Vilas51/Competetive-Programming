#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i,a,b) for(ll i = a;i<=b;i++)
#define ff(i,a,b) for(ll i=a ;i>=b;i--)
#define mod 1000000007
void solve(){
   
}
bool cmp(pair<ll,ll>p1, pair<ll,ll>p2){
    return p1.second<p2.second;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
    }
    ll c=0;
    ll ans=0;
    for(auto x:mp){
        c+=x.second;
        ans=max(ans,c);
    }
    cout<<ans<<endl;
    return 0;
}
