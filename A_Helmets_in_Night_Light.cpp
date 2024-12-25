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
   ll n,p; cin>>n>>p;
    vector<ll>b(n),a(n);
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        v[i].second=a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
        v[i].first=b[i];
    }
    sort(v.begin(),v.end());
    ll ans=p;
    ll i=0;
    ll j=1;
    while(j<n){
        if(v[i].first<=p){
            int x=v[i].second;
            while(j<n &&x--){
                ans+=v[i].first;
                j++;
            }
            i++;
        }
        else{
            j++;
            ans+=p;
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
