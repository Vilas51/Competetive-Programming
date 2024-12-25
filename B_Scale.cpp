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
   int n,m; cin>>n>>m;
   string arr[n];
   for(int i=0;i<n;i++){
        cin>>arr[i];
   }
    char narr[n/m][n/m];
    // int z=0;
    for(int i=0;i<n/m;i++){
        // int k=0;
        for(int j=0;j<n/m;j++){
            narr[i][j]=arr[i*m][j*m];
        }
        // z++;
    }
    for(int i=0;i<n/m;i++){
        for(int j=0;j<n/m;j++){
            cout<<narr[i][j];
        }
        cout<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
