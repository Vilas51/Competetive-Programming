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
   ll n;
   cin>>n;
   if(n%2==0){
    cout<<-1<<endl;
    return;
   }
   int j=1;
   int k=n;
   for(int i=n/2;i>0;i--){
    cout<<k<<" ";
    k--;
   }
   for(int i=0;i<n/2+1;i++){
    cout<<j<<" ";
    j++;
   }cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
