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
   ll n,k; string s; string ans;
   cin>>n>>k>>s;
   vector<ll>l(k),r(k);
   for(ll i=0;i<k;i++){
    cin>>l[i];
   }
   for(ll i=0;i<k;i++){
    cin>>r[i];
   }
   ll q; cin>>q;
   for(ll i=0;i<q;i++){
    ll x; cin>>x; 
    ll mini=min(x,r[0]+l[0]-x)-1;
    ll maxi=max(x,r[k-1]+l[k-1]-x)-1;
    // ans="";
    // ll j=0;
    // while(j<=mini){
    //     swap(s[mini],s[j]);
    //     j++; mini--;
    // }
    // // if(maxi==n)maxi--;
    // j=n-1; 
    // while(maxi<=j){
    //     swap(s[maxi],s[j]);
    //     j--; maxi++;
    // }
    while(mini<=maxi){
        swap(s[mini],s[maxi]);
        mini++; maxi--;
    }
   }
   cout<<s<<endl;
//    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
