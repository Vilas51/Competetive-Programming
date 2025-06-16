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
   string s;
   cin>>s;
   ll countd=0,countu=0;
   for(ll i=0;i<n;i++){
    if(s[i]=='-'){
        countd++;
    }else{
        countu++;
    }
   } 
   if(countd<2||countu==0){
    cout<<0<<endl;
   }else{
    cout<<(1LL * countd * countd / 4) * countu<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
