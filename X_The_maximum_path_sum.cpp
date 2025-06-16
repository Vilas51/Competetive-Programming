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

ll solve(vector<vector<ll>> & v,ll n,ll m,ll i,ll j){
    if(i>=n||j>=m) {
        return INT_MIN;
    }
    if(i==n-1&&j==m-1){
        return v[i][j];
    }
    ll w=solve(v,n,m,i+1,j);
    ll h=solve(v,n,m,i,j+1);
    return v[i][j]+max(h,w);
}

int main(){
    // ios::sync_with_stdio(0); cin.tie(0);
    ll n,m; cin>>n>>m;
    vector<vector<ll>>v(n, vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    ll ans=solve(v,n,m,0,0);
    cout<<ans<<endl;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
//  int solve(vector<vector<int>> & v,int n,int m,int i,int j,int ans){
//     // ans+=v[i][j];
//     if(i>=n || j>=m) {
//         return -1e9;
//     }
//     if(i==n-1 && j==m-1)return v[i][j];
//     int h=solve(v,n,m,i,j+1,ans);
//     int g=solve(v,n,m,i+1,j,ans);
//     return v[i][j]+max(h,g);
// }

// signed main(){
//     // ios::sync_with_stdio(0); cin.tie(0);
//     int n,m; cin>>n>>m;
//     vector<vector<int>>v(n, vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>v[i][j];
//         }
//     }
//     int ans=0;
//     cout<<solve(v,n,m,0,0,ans)<<endl;
    
//     return 0;
// }