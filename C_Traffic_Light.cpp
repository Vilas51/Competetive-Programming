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
   int n; char c; string s;
   cin>>n>>c>>s;
   ll ans=0;
   ll index;
   ll i=0;
   ll count=0;
   s+=s; bool f=0;
   for(i=0;i<2*n;i++){
    if(s[i]==c){
        f=1;
    }
    if(f&& s[i]!='g'){
        count++;
    }
    else{
        ans=max(count,ans);
        count=0;
        f=0;
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
