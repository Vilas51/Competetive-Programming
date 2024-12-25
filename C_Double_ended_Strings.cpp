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
   string a,b;
   cin>>a>>b;
   ll as=a.size();
   ll bs=b.size();
   ll ans=0;
   for(int l=1;l<=min(as,bs);l++){
    for(int i=0;i+l<=as;i++){
        for(int j=0;j+l<=bs;j++){
            if(a.substr(i,l)==b.substr(j,l)){
                ans=max(ans,(long long)l);
            }
        }
    }
   }
   cout<<as+bs-2*ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
