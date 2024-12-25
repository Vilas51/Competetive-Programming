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
bool prime(ll x){
    if(x%2==0)return false;
    if(x%3==0)return false;
    for(ll i=5;i*i<=x;i+=6){
        if(x%i==0||x%(i+2)==0)return false;
    }
    return true;
}
void solve(){
   ll n;
   cin>>n;
   if(n==1){
    cout<<2<<endl;
    return;
   }
    ll ans;
    for(ll i=n+1;i<=LLONG_MAX;i++){
        if(prime(i)){
            ans=i;
            break;
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
