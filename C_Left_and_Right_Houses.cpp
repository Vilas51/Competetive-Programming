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
   string s; cin>>s;
   ll suffix[n+1]; suffix[n]=0; 
   ll prefix[n]; prefix[0]=1;
   for(ll i=1;i<n;i++){
    // int cnt=s[i-1]==0;
    prefix[i]=(ceil((i+1)/2));
   }
   for(ll i=n-1;i>=0;i--){
    int cnt=s[i]==1;
    suffix[i]=suffix[i+1]+cnt;
   }
    ll i; ll c0=0,c1=0;
    for(i=0;i<n;i++){
        if(s[i-1]=='0')c0++;
        else c1++;
        if(c0>=prefix[i-1]&&c1>=suffix[i-1]) break;
        // if(c0>=ceil((i+1)/2)&&suffix[i]>=ceil((n-i+1)/2))break;
    }
    if(i==n)i=0;
    cout<<i<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
