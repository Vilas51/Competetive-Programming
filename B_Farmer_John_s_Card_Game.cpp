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
   int n,m;
   cin>>n>>m;
   vector<vector<int>>v(n,vector<int>(m));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
   }
   vector<int>ans(n);
   for(int i=0;i<n;i++){
    sort(v[i].begin(),v[i].end());
    //check v[i][0] is not out of bounds
    ans[v[i][0]]=i+1;
    bool f=1;
    for(int j=1;j<m;j++){
        if(v[i][j]-v[i][j-1]<n)f=0;
    }
    if(!f){
        cout<<-1<<endl;
        return;
    }
   }
   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
