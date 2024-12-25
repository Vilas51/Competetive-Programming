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
   vector<int>v;
   bool f=1;
   if(n<5)f=0;
   for(int i=1;i<=n;i+=2){
    if(i!=5)v.pb(i);
   }
   v.pb(5);
   v.pb(4);
   for(int i=2;i<=n;i+=2){
    if(i!=4)v.pb(i);
   }
//    cout<<v.size()<<endl;
//    for(int i=0;i<v.size()-1;i++){
//     if((v[i]+v[i+1])%2!=0&&floor(sqrt((v[i]+v[i+1])))!=ceil(sqrt((v[i]+v[i+1])))){
//         f=0;
//     }
//    }
   if(f){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
   }else{
    cout<<-1<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
