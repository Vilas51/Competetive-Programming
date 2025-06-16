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
   int n;
   cin>>n;
   int l,r;
   cin>>l>>r;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   vector<int>start,end;
   for(int i=0;i<l;i++){
    start[i].pb(v[i]);
   }
   for(int i=r;i<n;i++){
    end[i].pb(v[i]);
   }
   int length=r-l+1;
   sort(start.begin(),start.end());
   sort(end.begin(),end.end());
   
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
