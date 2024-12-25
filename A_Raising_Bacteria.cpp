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
//    ll n; cin>>n;
//    ll res=log2(n);
//    ll ans=abs((1<<res)-n);
//    ll ans2=abs(1<<(res+1)-n);
//     ll mini=min(ans,ans2);
// //     cout<<mini+1<<endl;
// // cout<<setprecision(5)<<endl;
// if((1<<res)==n){
//     cout<<1<<endl;
// }else{
//     ll ans=abs((1<<res)-n);
//     if(ans==1){
//          cout<<int(2+(log2(ans)))<<endl;
//     }else{
//         cout<<int(1+(log2(ans)))<<endl;
//     }
// }
    ll n; cin>>n;
    ll res=log2(n);
    int count=1;
    while(pow(2,res)!=n){
        n=abs((1<<res)-n);
        res=log2(n);
        count++;
    }
    cout<<count<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t=1;
    while(t--){
        solve();
    }
}
