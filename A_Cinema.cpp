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
    int mini=INT_MAX,maxi=INT_MIN;
    vector<int>all(101,0);
    for(int i=0;i<3;i++){
        int x,y;
        cin>>x>>y;
        for(int j=x;j<=y;j++){
            all[j]++;
        }
        all[y+1]--;
    }
    for(int i=0;i<101;i++){
        if(all[i]==3){
            cout<<i<<endl;
            return;
        }
    }
    cout<<0<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
