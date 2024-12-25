#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,k; cin>>n>>k;
    ll odd[n/2];
    ll evan[n/2];
    // prefix[0]=0;
    int index=0;
    for(int i=1;i<=n;i+=2){
        odd[index]=i;
        index++;
    }
    if(n&1)n--;
    index=0;
    int i=1;
    while(index<=n+1){
        i+=2;
        evan[index]=i*2;
        index++;
    }
    if(k<=n/2){
        cout<<odd[k-1]<<endl;
    }else{
        cout<<evan[k-1]<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}