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
    int n; cin>>n;
    vector<int>a(n),b(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n+1;i++){
        cin>>b[i];
    }
    ll ans=0;
    bool f=0;
    for(int i=0;i<n;i++){
        ans+=abs(a[i]-b[i]);
        if(b[n]>=a[i] && b[n]<=b[i]||b[n]<=a[i]&&b[n]>=b[i]){
            f=1;
        }
    }
    if(f){
        cout<<ans+1<<endl;
        return;
    }
    ll z2=INT_MAX;
    for(int i=0;i<n;i++){
        ll tatti=abs(a[i]-b[n]);
        z2=min(z2,tatti);
    }
    for(int i=0;i<n;i++){
        ll tatti=abs(b[i]-b[n]);
        z2=min(z2,tatti);
    }
    z2+=1;
    cout<<ans+z2<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
