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
    //TLE
//    int n; cin>>n;
//    vector<int>v(n);
//    for(int i=0;i<n;i++){
//     cin>>v[i];
//    }
//     ll count=0;
//     multiset<vector<int>>ans;
//     for(int i=1;i<n-1;i++){
//         vector<int> triplet = {v[i - 1], v[i], v[i + 1]};
//         ans.insert(triplet);
//         int a=v[i-1],b=v[i],c=v[i+1];
//         for(auto x: ans){
//             if(x[0]==a&&x[1]==b&&x[2]!=c){
//                 count++;
//             }
//             if(x[0]!=a&&x[1]==b&&x[2]==c){
//                 count++;
//             }
//             if(x[0]==a&&x[1]!=b&&x[2]==c){
//                 count++;
//             }
//         }
//         // cout<<i<<" "<<count<<" ";
//     }
//     cout<<count<<endl;
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<tuple<ll,ll,ll>,ll>mp;
    ll ans=0;
    for(int i=1;i<n-1;i++){
        ans += mp[{-1, v[i], v[i + 1]}] + mp[{v[i - 1], -1, v[i + 1]}] + mp[{v[i - 1], v[i], -1}] - 3 * mp[{v[i - 1], v[i], v[i + 1]}];
        mp[{-1, v[i], v[i + 1]}]++;
        mp[{v[i - 1], -1, v[i + 1]}]++;
        mp[{v[i - 1], v[i], -1}]++;
        mp[{v[i - 1], v[i], v[i + 1]}]++;
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
