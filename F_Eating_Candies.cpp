#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    // ll prefix[n],suffix[n];
    // prefix[0]=v[0]; suffix[n-1]=v[n-1];
    // for(ll i=01;i<n;i++)prefix[i]=v[i]+prefix[i-1];
    // for(ll i=n-1;i>=0;i--)suffix[i]=v[i]+suffix[i+1];
    
    ll i=0,j=n-1;
    ll alice=v[0],bob=v[n-1],ans=0;
    while(i<j){
        if(bob==alice){
            ans=max(ans,i+n-j+1);
        }
        if(alice<=bob){
            i++; alice+=v[i];
        }
        else if(bob<alice){
            j--; bob+=v[j];
        }
    }
    cout<<ans<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}