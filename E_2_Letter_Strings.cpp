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
   ll n; cin>>n;
   string s[n];
   map<string,int>m;
   for(int i=0;i<n;i++){
    cin>>s[i];
    m[s[i]]++;
   }ll ans=0;
   for(int i=0;i<n;i++){
    char t=s[i][0];
    for(char j='a';j<='k';j++){
        if(j==s[i][1])continue;
        string temp = "";
        temp+=t;
        temp+=j;
        if(m.find(temp)!=m.end() ){
            ans+=m[temp];
        }
    }t=s[i][1];
    for(char j='a';j<='k';j++){
        if(j==s[i][0])continue;
        string temp = "";
        temp+=j;
        temp+=t;
        if(m.find(temp)!=m.end()){
            ans+=m[temp];
        }
    }
   }cout<<ans/2<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
