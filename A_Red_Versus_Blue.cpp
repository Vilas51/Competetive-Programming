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
   int n,r,b; cin>>n>>r>>b;
   int g=r/(b+1);
   int z=r%(b+1);
   string ans="";
    int count=0;
   for(int i=0;i<n;i++){
    ans.pb('R');
    count++;
    if(count==g){
        if(z>0){
            ans.pb('R');
            z--;
            i++;
        }
        if(i<n-1){
            ans.pb('B');
            count=0;
            i++;
        }
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
