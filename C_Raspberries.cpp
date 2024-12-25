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
   int n,k; cin>>n>>k;
   vector<int>v(n); bool f=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   int ans=k; int c=0;
   for(int i=0;i<n;i++){
    if(v[i]%k!=0){ int x=v[i]/k; ans=min((x+1)*k-v[i],ans);}
    else {cout<<0<<endl; return;}
    if(v[i]%2==0)c++;
   }
   if(k==4) ans=min(ans,max(0,2-c));
   cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
