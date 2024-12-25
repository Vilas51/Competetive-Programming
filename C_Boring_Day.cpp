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
   ll n,l,r; cin>>n>>l>>r;
   vector<ll>v(n);
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
   ll currsum=0;
   ll ans=0,j=0;
   for(int i=0;i<n;i++){
    currsum+=v[i];
    if(currsum<l){
        continue;
    }
    if(currsum<=r){
        ans++;
        j=i+1;
        currsum=0;
        continue;
    }
    while(j<=i&&currsum>r){
        currsum-=v[j];
        j++;
    }
    if(currsum>=l){
        currsum=0;
        ans++;
        j=i+1;
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
