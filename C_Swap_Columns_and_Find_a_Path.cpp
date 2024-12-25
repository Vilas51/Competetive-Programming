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

// void solve(){
//    int n;
//    cin>>n;
// //    vector<int>v1(n),v2(n);
// //    int secondmin=INT_MAX,firstmax=INT_MIN;
// //    int firstmin=INT_MAX,secondmax=INT_MIN;
// //    for(int i=0;i<n;i++){
// //     cin>>v1[i];
// //     firstmin=min(firstmin,v1[i]);
// //     firstmax=max(firstmax,v1[i]);
// //    }
// //    for(int i=0;i<n;i++){
// //     cin>>v2[i];
// //     secondmin=min(secondmin,v2[i]);
// //     secondmax=max(secondmax,v2[i]);
// //    }
// //    ll sum=0;
// //    bool f1=0,f2=0;
// //    for(int i=0;i<n;i++){
// //     if(max(v1[i],v2[i])==v1[i]){
// //         f1=1;
// //     }else{
// //         f2=1;
// //     }
// //     sum+=max(v1[i],v2[i]);
// //    }
// //     ll maxi=INT_MIN,close;
// //     for(int i=0;i<n;i++){
// //         if(v1[i]>maxi){
// //             close=v2[i];
// //             maxi=v1[i];
// //         }
// //         if(v2[i]>maxi){
// //             close=v1[i];
// //             maxi=v2[i];
// //         }
// //     }
// //    if(f1==1 && f2==1){
// //     cout<<sum+firstmax<<endl;
// //    }
// //    else if(f1==1&& !f2){
// //     cout<<sum+secondmax<<endl;
// //    }
// //    else{
// //     cout<<sum+firstmax<<endl;
// //    }
//     int v[2][n];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<n;j++){
//             cin>>v[i][j];
//         }
//     }
//     ll sum=INT_MIN;
//     for(int i=0;i<n;i++){
//         ll currsum=0;
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 currsum+=v[0][j]+v[1][j];
//             }else{
//                 currsum+=max(v[0][j],v[1][j]);
//             }
//         }
//         sum=max(currsum,sum);
//     }
//     cout<<sum<<endl;
// }


ll solvebydp(int i, int n, int flag, int v[2][1001], vector<vector<ll>> &dp) {
    if (i == n) return 0; // Base case: no columns left

    if (dp[i][flag] != -1) return dp[i][flag]; // Return cached value

    ll result = 0;
    if (flag == 0) {
        // This column is not "special"
        result = max(v[0][i], v[1][i]) + solvebydp(i + 1, n, 0, v, dp);
    } else if (flag == 1) {
        // This column is "special"
        result = (v[0][i] + v[1][i]) + solvebydp(i + 1, n, 0, v, dp);
    }

    return dp[i][flag] = result;
}

void solve() {
    int n;
    cin >> n;

    int v[2][1001];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    // DP table: dp[i][flag], initialize with -1
    vector<vector<ll>> dp(n, vector<ll>(2, -1));

    ll max_sum = LLONG_MIN;
    for (int special = 0; special < n; special++) {
        // Calculate the sum assuming column `special` is the "special" column
        ll curr_sum = (v[0][special] + v[1][special]) + solvebydp(special + 1, n, 0, v, dp);
        max_sum = max(max_sum, curr_sum);
    }

    cout << max_sum << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
