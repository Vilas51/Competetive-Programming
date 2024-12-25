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
   ll n,s,m;
   cin>>n>>s>>m;
   ll took=0;
   vector<pair<int,int>>v(n+2);
   v[0]={0,0};
   for(ll i=0;i<n;i++){
    cin>>v[i+1].first;
    cin>>v[i+1].second;
   }
   v[n+1]={m,m};
   sort(v.begin(),v.end());
   for(int i=1;i<n+2;i++){
    if(v[i].first-v[i-1].second>=s){
        cout<<"YES"<<endl;
        return;
    }
   }
   cout<<"NO"<<endl;
//    ll to=0;
//    ll left=0;
//    for(ll i=0;i<=m;i++){
//     if(v[i]==1){
//         took++;
//     }
//     else{
//         if(took%2==0){
//             left=i;
//             if(i>0)left--;
//             while(i<=m&&v[i]==0){
//                 i++;
//             }
//             if(i-left>=s){
//                 cout<<"YES"<<endl;
//                 return;
//             }
//         }
//     }
//    }
//    cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
