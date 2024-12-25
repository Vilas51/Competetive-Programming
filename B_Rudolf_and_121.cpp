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
   int n; cin>>n; vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   } int i;
   for( i=0;i<n-2;i++){
    if(v[i]<0){cout<<"NO"<<endl; return;}
    int o=v[i];
    v[i]-=o;
    v[i+1]-=2*o;
    v[i+2]-=o;
   }
   if(v[i]!=0 || v[i+1]!=0)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
