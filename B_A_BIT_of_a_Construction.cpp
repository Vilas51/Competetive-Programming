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
//    if(n>k && n&(n-1)!=0){
//     for(int i=0;i<n;i++){
//         if( i==0){
//             cout<<k<<" ";
//         }else{
//             cout<<0<<" ";
//         }
//     }cout<<endl;
//     return;
//    }
   int n,k;
   cin>>n>>k;
   if(n==1){
    cout<<k<<endl; return;
   }

//    ll res=1,j=1;
//    ll coun1=0;
//    vector<int>ans;
//    ans.push_back(1);
//    while(ans.size()!=n-1 && res+pow(2,j)<k){
//         res+=pow(2,j);
//         ans.push_back(pow(2,j));
//         j++;
//    }
//     ans.push_back(k-res);
//     ll l=ans.size();
//     if(l<n){
//         for(int i=l;i<n;i++){
//             ans.push_back(0);
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }cout<<endl; 
//     return;
    
    int z=log2(k);
    int l=1<<z;
    cout<<l-1<<" "<<k-(l-1)<<" ";
    for(int i=2;i<n;i++){
        cout<<0<<" ";
    }cout<<endl;
    return;
    
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
        while(t--){
            solve();
        }
}
