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
// int nearestSmallerPowOf2(int n) {
//     if ((n & (n - 1)) == 0) 
//         return n;
//     int count = 0;
//     while (n > 1) {
//         n >>= 1;
//         count++;
//     }
//     return 1 << count;
// }
void solve(){
   int n; cin>>n;
   int x=1;
   while(2*x<n){
    x*=2;
   }
   for(int i=n-1;i>=x;i--){
    cout<<i<<" ";
   }
   for(int i=0;i<x;i++){
    cout<<i<<" ";
   }
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
