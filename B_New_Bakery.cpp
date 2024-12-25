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
   ll n,a,b;
    cin>>n>>a>>b;
    // ll awale = n * a;
    ll k = b-a;
    if(k<0)k=0;
    if(k>n)k=n;
    ll wale=(2*b-k+1)*k/2;
    n-=k;
    if(n>0)wale+=n*a;
    cout<<wale<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
