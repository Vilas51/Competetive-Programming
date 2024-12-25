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
   int k;
   int ans=0;
   for(int i=2;i<=n;i++){
    int curr=0;
    int h=1;
    while(h*i<=n){
        curr+=h*i;
        h++;
    }
    if(curr>=ans){
        ans=curr;
        k=i;
    }
   }
   cout<<k<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
