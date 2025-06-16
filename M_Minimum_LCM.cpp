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
   ll ans=1;
   for(ll i=2;i*i<=n;i++){
    if(n%i==0){
        // if((n-i)%i==0){
            ans=n/i; break;
        // }
    }
   }
//    if(ans==0){
    cout<<ans<<" "<<n-ans<<endl;
//    }
//    else{
//     cout<<ans<<" "<<n-ans<<endl;
//    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
