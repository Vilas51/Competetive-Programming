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
   vector<ll>v(n);
   for(ll i=0;i<n;i++)cin>>v[i];
   sort(v.begin(),v.end());
   ll ans=0;
   if(n==0){
    ans=min(abs(v[0]-n),abs(n-v[0]));
    cout<<ans<<endl;
    return;
   }else{
    if(k<=v[0]){
        cout<<v[n-1]-k<<endl;
    }
    else if(k>=v[n-1]){
        cout<<k-v[0]<<endl;
    }else{
        ll fir=min(abs(k-v[0]),abs(v[0]-k));
        ll sec=min(abs(v[n-1]-k),abs(v[n-1]-k));
        ans=min(fir*2+sec,sec*2+fir);
        cout<<ans<<endl;
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
