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
   ll n,q;
   cin>>n>>q;
   vector<ll>v(n);
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
   map<ll,ll>mp;
   for(ll i=0;i<n;i++){
    if(i==n-1){
        mp[i]++;
    }
    else {
        mp[i*(n-i)+(n-i-1)]++; //for that singe number 
        mp[(i+1)*(n-i-1)]+=v[i+1]-v[i]-1; //for the range of numbers excepting that single number 
    }
   }
   for(ll i=0;i<q;i++){
    ll x;
    cin>>x;
    cout<<mp[x]<<" ";
   }cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
