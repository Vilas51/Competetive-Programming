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
   int n;
   cin>>n;
   string s;
   cin>>s;
   set<char>m;
   for(int i=0;i<n;i++){
    m.insert(s[i]);
   }
   int z=m.size();
   vector<char>k;
    for(auto tt:m){
        k.pb(tt);
    }
    string ans="";
    for(int i=0;i<n;i++){
        int itr=find(k.begin(),k.end(),s[i])-k.begin();
        ans.pb(k[k.size()-1-itr]);
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
