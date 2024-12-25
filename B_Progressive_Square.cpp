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
    int n, x, y;
    cin >> n >> x >> y;
    int grid[n*n], mG[n*n], rowSums[n], minVal = INT_MAX;
    for(int i = 0; i < (n*n); i++){
        cin >> grid[i];
        rowSums[i] = 0;
    }
    sort(grid, grid + (n*n));
    minVal = grid[0];
    for(int i = 0; i < n; i++){
        rowSums[i]=minVal+(i*y);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            mG[i*n + j] = (rowSums[i] + (x * j));
        }
    }
    sort(mG, mG + (n*n));
    bool isEqual = true;
    for(int i = 0; i < (n*n); i++){
        if(grid[i] != mG[i]){
            isEqual = false;
            break;
        }
    }
    if(isEqual){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}