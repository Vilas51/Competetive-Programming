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
   ll n,q;
   cin>>n>>q;
   string a,b;
   cin>>a>>b;
   vector<vector<int>>prefa(26,vector<int>(n,0)),prefb(26,vector<int>(n,0));
   for(int i=0;i<n;i++){
    prefa[a[i]-'a'][i]++;
    prefb[b[i]-'a'][i]++;
   }
   for(int i=0;i<26;i++){
    for(int j=1;j<n;j++){
        prefa[i][j]+=prefa[i][j-1];
        prefb[i][j]+=prefb[i][j-1];
    }
   }
   while(q--){
    ll l,r; cin>>l>>r; 
    l--; r--;
    ll maxdiff=0;
    ll ans=0;
    for(int i=0;i<26;i++){
        ll counta=prefa[i][r];
        ll countb=prefb[i][r];
        if(l>0){
            counta-=prefa[i][l-1];
            countb-=prefb[i][l-1];
        }
        maxdiff+=abs(countb-counta);
    }
    ans+=maxdiff/2;
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
