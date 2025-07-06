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
   string s;
   cin>>n>>s;
   map<char,int>mp;
   for(ll i=1;i<n-1;i++){
    mp[s[i]]++;
    if(s[i]==s[0]||s[n-1]==s[i]||mp[s[i]]==2){
        cout<<"Yes"<<endl;
        return ;
    }
   }
   cout<<"No"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
