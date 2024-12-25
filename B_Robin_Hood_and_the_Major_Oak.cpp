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
   ll n,k;
   cin>>n>>k;
   ll s=n-k+1;
   ll len=n-s+1;
   if(s%2==0){
    if(len/2%2==0||len==1){
         cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
   }
   else{
    if(len>1&&(len+1)/2%2==0){
         cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
