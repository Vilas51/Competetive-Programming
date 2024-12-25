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
    vector<vector<int>>m(n,vector<int>(n,0));
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[i][j]=j+1;
        }
    }
    int k=n;
    if(n<=2){
        for(int j=0;j<n;j++){
            ans.pb({1,j+1});
        }
    }
    if(n>2){
        int k=n;
        for(int j=0;j<n;j++){
            ans.pb({1,k});
            ans.pb({2,k});
            k--;
        }
    }
    if(n==2)ans.pb({2,1});
    ll sum=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int value = max(i + 1, j + 1);
            sum += value;
        }  
    }
    cout<<sum<<" "<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<" ";
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
