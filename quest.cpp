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
   string s;
   cin>>s;
   vector<string>v;
   for(int i=0;i<s.size();i+=2){
    string ans = string(1, s[i]) + string(1, s[i+1]);
    v.pb(ans);
   }
   for(int i=0;i<v.size();i++){
    cout<<"'"<<v[i]<<"'"<<" ";
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; 
    // cin>>t;
    t=1;
    while(t--){
        solve();
    }
}
