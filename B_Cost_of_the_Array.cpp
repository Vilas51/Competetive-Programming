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
   ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==k){
        ll mex=1;
        for(int i=1;i<n;i+=2){
            // if(i%2==1){
                if(mex!=v[i]){
                    cout<<mex<<endl;
                    return;
                }else{
                    mex++;
                }
            // }
        }
        cout<<mex<<endl;
        return;
    }
    int i;
    for(i=1;i<n;i++){
        if(v[i]!=1)break;
    }
    if(n-i>k-2){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}