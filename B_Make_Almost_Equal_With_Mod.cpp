// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define ld long double
// #define upd upper_bound
// #define lpd lower_bound
// #define pb push_back
// #define endl "\n"
// #define f(i,a,b) for(ll i = a;i<=b;i++)
// #define ff(i,a,b) for(ll i=a ;i>=b;i--)
// #define mod 1000000007
// void solve(){
//    ll n; cin>>n; ll k=0; 
//    vector<ll>a(n);
//    for(ll i=0;i<n;i++) {
//     cin>>a[i];
//     k=__gcd(k,abs(a[i]-a[0]));
//    }
//    cout<<k+k<<endl;
// }
// int main(){
//     ios::sync_with_stdio(0); cin.tie(0);
//     int t; cin>>t;
//     while(t--){
//         solve();
//     }
// }
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
   int n; cin>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }

   for(int i=0;i<64;i++){
    bool f1=0,f2=0;
    for(int j=0;j<n;j++){
        if(v[j]&(1LL<<i)){
            f1=1;
        }else{
            f2=1;
        }
    }
    if(f1&&f2){
        cout<<(1LL<<(i+1))<<endl;
        return;
    }
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
