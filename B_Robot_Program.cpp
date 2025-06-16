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
   ll n,x,k;
   cin>>n>>x>>k;
   string s;
   cin>>s;
   ll ans=0;
   ll counter=x;
   ll i,j=0;
   ll counted=0;
   for(i=0;j<n;i++){
    if(s[i]=='L'){
        counter--;
    }
    else{
        counter++;
    }
    if(counter==0){
        i=0;
        counted++;
    }
    j++;
   }
   if(counter!=0){
    cout<<0<<endl;
    return;
   }
   ll time=i+1;
   cout<<(k/time)<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
