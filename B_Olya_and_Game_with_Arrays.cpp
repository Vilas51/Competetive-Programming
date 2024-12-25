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
   ll n; cin>>n;
    vector<ll>a1,a2;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        vector<ll>v(a);
        for(int j=0;j<a;j++){
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        a1.pb(v[0]);
        // for(int j=0;j<a;j++){
        //     if(v[j]!=v[j-1]){
        //         a2.pb(v[j]);
        //         break;
        //     }
        // }
        a2.pb(v[1]);
        // cout<<v[0]<<" "<<v[1]<<" ";
        v.clear();
    }
    ll ans=0,mini=LONG_LONG_MAX;
    for(int i=0;i<a1.size();i++){
        // cout<<a1[i]<<" ";
        mini=min((ll)mini,(ll)a1[i]);
    }
    // cout<<mini<<" ";
    ans+=mini;
    ll mini2=LLONG_MAX;
    for(int i=0;i<a2.size();i++){
        mini2=min((ll)mini2,(ll)a2[i]);
        ans+=a2[i];
    }
    // cout<<mini2<<" ";
    cout<<ans-mini2<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
