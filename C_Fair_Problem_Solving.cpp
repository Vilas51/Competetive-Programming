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
   ll counta=0,countb=0;
   ll n,a,b;
   cin>>n>>a>>b;
   vector<int>v;
   for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }
   ll l=1,h=100000000;
   ll ans=0;
   while(l<h){
    ll mid=(l+h)/2;
    ll counta=0,countb=0;
    for(ll i=0;i<n;i++){
        if(v[i]<=a){
            counta++;
        }
        if(v[i]<=b){
            countb++;
        }
    } 
    if(mid>=counta&&mid>=countb){
        ans=mid;
        l=mid+1;
    }
    else{
        h=mid-1;
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
