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
   cout<<min(n,m)+1<<endl;
   int h=n,l=0;
   for(int i=0;i<=min(n,m);i++){
    cout<<h<<" "<<l<<endl;
    h--; l++;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--){
        //  solve();
    // }
    int n,m;
   cin>>n>>m;
   cout<<min(n,m)+1<<endl;
   int h=n,l=0;
   for(int i=0;i<=min(n,m);i++){
    cout<<h<<" "<<l<<endl;
    h--; l++;
   }
   return 0;
}
