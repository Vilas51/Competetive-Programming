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
   ll n,l,r;
   cin>>n>>l>>r;
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll res=0;
    for(int i=0;i<n;i++){
        ll curr=v[i];
        ll minele=l-curr;
        ll maxele=r-curr;
        ll lo=lpd(v.begin()+i+1,v.end(),minele)-v.begin();
        ll up=upd(v.begin()+i+1,v.end(),maxele)-v.begin();
        if(lo>i&&lo<=up)res+=up-lo;
        // cout<<lo<<" "<<up<<endl;
    }
    cout<<res<<endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
