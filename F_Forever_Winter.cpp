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
   for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
   }
   for(int i=1;i<max(n,m);i++){
    for(int j=1;j<max(n,m);j++){
        if(1+i+(i*j)==n){
            cout<<i<<" "<<j<<endl;
            return;
        }
        else if(1+i+(i*j)>n){
            break;
        }
    }
   }
   return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
