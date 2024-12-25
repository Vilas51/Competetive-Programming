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
   int n; cin>>n;
   string s; cin>>s;
   map<int,int>mp;
   for(char c:s){
    mp[c]++;
   }
   int maxi=INT_MIN;int mini=INT_MAX;
   char resmaxi,resmini;
   for(auto x:mp){
    if(x.second>maxi){
        maxi=x.second;
        resmaxi=x.first;
    }
    if(x.second<mini){
        mini=x.second;
        resmini=x.first;
    }
   }
   for(int i=0;i<n;i++){
    if(mp[s[i]]==mini&&s[i]!=resmaxi){
        s[i]=resmaxi;
        break;
    }
   }cout<<s<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
