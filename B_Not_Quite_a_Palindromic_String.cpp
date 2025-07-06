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
   ll n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   ll cnt0=0,cnt1=0;
   for(int i=0;i<n;i++){
    if(s[i]=='0')cnt0++;
    else cnt1++;
   }
//    if(cnt1/2<k&&cnt0/2<k){
//     cout<<"NO"<<endl;
//     return;
//    }
   while(k--){
    if(cnt1>cnt0&&cnt1>1){
        cnt1-=2;
    }
    else {
        cnt0-=2;
    }
   }
   if(cnt0==cnt1){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
