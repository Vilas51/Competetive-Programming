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
   if(n==1){
    cout<<0<<endl;
    return;
   }
   else{
    if(k==2){
        cout<<n-1<<endl;
    }
    else{
        int z=n/(k-1);
        int y=z*(k-1);
        n-=y;
        if(n>1){
            z++;
        }
        cout<<z<<endl;
    }
    return;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
