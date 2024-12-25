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
   string a,b;
   cin>>a>>b;
   int j=0;
   ll oper=0;
   for(int i=0;i<m;i++){
    if(j<n&&a[j]==b[i]){
        oper++;
        j++;
    }
    // else{
    //     // if(j<n)j++;
    // }
    if(j>=n)break;
   }
   cout<<oper<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
