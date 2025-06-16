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
//    vector<vector<int>>v;
//    int i=2;
//    while(i<=n){
//     int j=1,k=i;
//     while(k<=n){
//         v.pb({i,j,k});
//         if(i%2==0&&n>3){
//             k+=i;
//             j+=i;
//         }
//         else {
//             j++;
//             k++;
//         }
//     }
//     if(n%2!=0){
//         if(i!=2){
//             v.pb({i,n-(i-2),n});
//         }
//     }
//     // ig()
//     i++;
//    }
// //    if(n%2!=0){
// //     v.pb({n,n-1,n});
// //    }
//    cout<<v.size()<<endl;
//    for(auto c:v){
//     cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl;
//    }
// return;
    vector<vector<int>>v;
    for(int i=1;i<=n;i++){
        if(i>1)v.pb({i,1,i});
        if(i<n)v.pb({i,i+1,n});
    }
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    }return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
