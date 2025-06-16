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
   ll n,k ;
   cin>>n>>k;
   vector<ll>v(n);
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
//    sort(v.begin(),v.end());
   ll count=0,mex=1;
   for(ll i=0;i<n;i++){
    if(v[i]==mex){
        mex++;
    }else{
        count++;
    }
   }
//    cout<<count<<" ";
   cout<<(count+(k-1))/k<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
