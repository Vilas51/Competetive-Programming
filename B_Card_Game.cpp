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
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    // if(a1>b1&&a1>b2&&a2>b1&&a2>b2){
    //     cout<<4<<endl;
    //     return;
    // }
    // if(a1>b1||a1>b2&&a2>b1||a2>b2){
    //     cout<<2<<endl;
    //     return;
    // }
    // int ans=0;
    // if(a1==b1&&a2>b2)ans++;
    // if(a2==b2&&a1>b1)ans++;
    // if(a1==b2&&a2>b1)ans++;
    // if(a2==b1&&a1>b2)ans++;
    // cout<<ans<<endl;
    int x = (int(a1 > b1) - int(a1 < b1) + int(a2 > b2) - int(a2 < b2)) > 0;
    int y = (int(a1 > b2) - int(a1 < b2) + int(a2 > b1) - int(a2 < b1)) > 0;
    cout << (x + y) * 2 << '\n';
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
