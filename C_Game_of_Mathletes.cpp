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
   ll n,k;
   cin>>n>>k;
   map<ll,ll>mp;
   ll pairs=0;
   for(int i=0;i<n;i++){
    ll x; cin>>x;
    if(mp.find(k-x)!=mp.end()){
        pairs++;
        mp[k-x]--;
        if(mp[k-x]==0){
            mp.erase(k-x);
        }
    }
    else{
        mp[x]++;
    }
   }
//    if(pairs==0){
//     cout<<0<<endl;
//    }
//    else if(pairs==n/2){
//     cout<<n/2<<endl;
//    }
//    else{
    cout<<pairs<<endl;
//    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
