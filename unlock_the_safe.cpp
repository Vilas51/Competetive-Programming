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
   vector<ll>a(n),b(n);
   for(ll i=0;i<n;i++)cin>>a[i];
   for(ll i=0;i<n;i++)cin>>b[i];
    ll req=0;
   for(int i=0;i<n;i++){
    req+=min(abs(a[i]-b[i]),9-abs(a[i]-b[i]));
   }
   if(req>k){
    cout<<"No"<<endl;
    return;
   }
   if((k-req)%2==0){
    cout<<"Yes"<<endl;
    return;
   }
   for(ll i=0;i<n;i++){
    ll curr=abs(abs(a[i]-b[i])-(9-abs(a[i]-b[i])));
    // if(abs(a[i]-b[i])%2==0){
    //     curr+=(9-abs(a[i]-b[i]));
    // }else{
    //     curr+=abs(a[i]-b[i]);
    // }
    if(req+curr<=k){
        cout<<"Yes"<<endl;
        return;
    }
   }
   cout<<"No"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
}
