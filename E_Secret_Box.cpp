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
   ll x,y,z,t;
   cin>>x>>y>>z>>t;
   ll count=0;
    for(ll i=1;i<=x;i++){
        if(t%i==0){
            for(ll j=1;j<=y;j++){
                if(t%(i*j)==0){
                    ll k=t/(i*j);
                    if(k>=1&&k<=z){
                        ll ans=(x-i+1)*(y-j+1)*(z-k+1);
                        count=max(count,ans);
                    }
                }
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
