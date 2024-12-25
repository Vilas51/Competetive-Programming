#include <bits/stdc++.h>
#include <iomanip>
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
   ll n,k,q;
   cin>>n>>k>>q;
   vector<int>a(k+1),b(k+1);

   a[0]=0; b[0]=0;
   for(int i=1;i<=k;i++){
    cin>>a[i];
   }
   a[k]=n;
   for(int i=1;i<=k;i++){
    cin>>b[i];
   }
   for(int i=0;i<q;i++){
    int x; cin>>x;
    if(x==0){
        cout<<0<<" ";
        continue;
    }
    if(x==n){
        cout<<b[k]<<" ";
        continue;
    }
    ll index=upd(a.begin(),a.end(),x)-a.begin();
    ll dist=a[index]-a[index-1];
    ll time=b[index]-b[index-1];
    ll toto=x-a[index-1];
    cout<<b[index-1]+((toto*time)/dist)<<" ";
   }
//    cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
