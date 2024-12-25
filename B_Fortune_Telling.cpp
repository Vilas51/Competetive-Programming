#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>v(n);
    ll codd=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        if(v[i]&1)codd++;
    }
    if(codd&1){
        if((x&1)==(y&1)){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    else{
        if((x&1)==(y&1)){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}