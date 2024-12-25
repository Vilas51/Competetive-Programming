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
   ll n,m,k; cin>>n>>m>>k;
  if(k>n&&k>m){
    cout<<m*n<<endl;
  }
  else if(k<n&&k>m){
    cout<<n%k*2<<endl;
  }
  else if(k>n&&k<m){
    cout<<m%k*2<<endl;
  }
  else{
    cout<<m%k*2+n%k*2<<endl;
  }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
