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
   int n=s.size();
   bool f=0;
   int i;
   for( i=0;i<n-1;i++){
    if(s[i]!=s[i+1]){
        f=1;
        break;
    }
   }
   if(!f)cout<<"NO"<<endl;
   else {
    cout<<"YES"<<endl;
    swap(s[i],s[i+1]);
    cout<<s<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
