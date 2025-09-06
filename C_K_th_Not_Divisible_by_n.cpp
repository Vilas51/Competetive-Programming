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
   int n,k;
   cin>>n>>k;
   if(k<n){
    cout<<k<<endl; return;
   }
   if(k==n){
    cout<<k+1<<endl;
    return;
   }
   int rem=(k-1)/(n-1);
//    while(rem){
//     rem=(k-n)/rem;
//    }
    cout<<k+rem<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
