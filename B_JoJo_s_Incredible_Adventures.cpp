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
   string s;
   cin>>s;
   int n=s.size();
   ll count=0;
   ll ans=0;
   for(int i=0;i<n;i++){
    if(s[i]=='1'){
        count++;
    }
    else{
        count=0;
    }
    if(count>1){
        int lo=(count+1)/2;
        int hi=(count)/2;
        ans=max(ans,(ll)lo*hi);
    }
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
