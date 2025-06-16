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
   ll l,r; cin>>l>>r;
   vector<vector<bool>>v(r-l+1);
   ll k=0;
   for(ll i=l;i<=r;i++){
    vector<bool>temp(32,0);
    for(ll j=0;j<32;j++){
        if(((1<<j)&i)){
            temp[j]='1';
        }
    }
    reverse(temp.begin(),temp.end());
    v[k]=temp;
    k++;
   }
   ll ans=r-l;
   for(ll i=0;i<32;i++){
    ll maxsize=r-l;
    ll count=0;
    for(ll j=0;j<r-l+1;j++){
        if(v[j][i]==0){
            count++;
        }
    }
    ans=min(ans,count);
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
