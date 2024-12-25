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
   ll a,b;
   cin>>a>>b;
   if(a>=b){
    cout<<a<<endl;
    return;
   }
    if(b>a*2){
        cout<<0<<endl;
        return;
    }
   ll j=1;
   ll ans=0;
   while(true){
    if(a-j<0){
        break;
    }
    if(a-j==b-(j*2)){
        ans=b-(j*2);
    }
    else if(b<a+j){
        break;
    }
    j++;
   }
//    if(ans!=-1){
    cout<<ans<<endl;
//    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
