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
   ll k,a,b,x,y;
   cin>>k>>a>>b>>x>>y;
   if(k<a&&k<b){
    cout<<0<<endl;
    return;
   }if(k==a&&k==b){
    cout<<1<<endl;
    return;
   }
   ll diffa=k-a,diffb=k-b;
   if(diffa/x>=diffb/y){
    ll ans=diffa/x;
    k-=ans*x;
    if(k>=a){
        ans++;
        k-=x;
    }
    if(k>b){
        ans+=(k-b)/y;
        k-=(k-b);
    }
    if(k>=b){
        ans++;
        k-=y;
    }
    cout<<ans<<endl;
   }
   else if(diffa/x<diffb/y){
    ll ans=diffb/y;
    k-=ans*y;
    if(k>=b){
        ans++;
        k-=y;
    }
    if(k>a){
        ans+=(k-a)/x;
        k-=(k-a);
    }
    if(k>=a){
        ans++;
        k-=x;
    }
    cout<<ans<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
