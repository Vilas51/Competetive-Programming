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
//    int n; cin>>n;
//    vector<int>v;
//    ll res;
//    for(int i=0;i<n;i++){
//     res=0;
//     int k; cin>>k;
//     res|=k;
//     for(int i=0;i<k;i++){
//         int z;cin>>z;
//         res|=z;
//     }
//     v.pb(res);
//    }
//    sort(v.begin(),v.end());
//    bool f=0;
//     for(int i=0;i<v.size()-1;i++){
//         if(v[i]==v[i+1]){
//             f=1; break;
//         }
//     }
//     if(f)cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
    // ll n; cin>>n;
    // vector<int>cnt(32);
    // vector<vector<int>>v(n);
    // for(int i=0;i<n;i++){
    //     int a; cin>>a;
    //     // v[i].push_back(a);
    //     v[i].resize(a);
    //     for(int j=0;j<a;j++){
    //         int t; cin>>t;
    //         cnt[t]++;
    //         v[i][j]=t;
    //     }
    // }
    // bool flag;
    // for(int i=0;i<n;i++){
    //      flag=1;
    //     for(int j=0;j<v[i].size();j++){
    //         if(cnt[v[i][j]]==1){
    //             flag=0;
    //             break;
    //         }
    //     }
    //     if(flag){
    //         break;
    //     }
    // }
    // if(flag)cout<<"Yes"<<endl;
    // else cout<<"No"<<endl;
//     ll n;
//     cin>>n;
//    map<int,int>m;//frequency
//     vector<vector<int>>v(n,vector<int>());
//     for(int i=0;i<n;i++){
//         int c;
//         cin>>c;
//         for(int j=0;j<c;j++){
//             int a;cin>>a;
//             m[a]++;
//             v[i].push_back(a);
//         }
    // }
    // for(int i=0;i<n;i++){
    //     int flag=true;
    //     for(auto it:v[i]){
    //         if(m[it]==1){
    //             flag=false;
    //             break;
    //         }
    //     }
    //     if(flag){
    //         cout<<"yes"<<endl;
    //         return;
    //     }
    // }
    // cout<<"no"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
