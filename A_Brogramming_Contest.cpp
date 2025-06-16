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
   int i=0;
   for(i=0;i<n;i++){
    if(s[i]=='1')break;
   }
   if(i==n){
    cout<<0<<endl;
    return;
   }
   int c=1;
   while(i<n && s[i]=='1'){
    i++;
   }
   c+=n-i;
   cout<<c<<endl;
   return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
