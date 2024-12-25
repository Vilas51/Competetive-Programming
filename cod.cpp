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
   vector<ll>v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
    sort(v.begin(),v.end());
    ll maxi=v[n-1];
    ll mini=-1; ll j=0; bool f=0;
    for(ll i=0;i<n-1;i++){
        if(v[i]!=v[i+1] ){
            if(v[i]!=j){
                mini=j; f=1; break;
            }
            j++;
        }
    }
    if(!f){
        if(v[n-1]!=j){
            mini=j;
        }
    }
    if(mini==-1){
        cout<<0<<endl;
    }
   else{
    cout<<(maxi+mini)/2<<endl;
   } 
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}

