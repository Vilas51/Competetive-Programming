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
   int n,s,e;
   cin>>n>>s>>e;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
//    if(n==2){
//     if(s==v[s-1]&&s==e){
//         cout<<0<<endl;
//     }
//     else if(s==v[s-1]&&s!=e){
//         cout<<-1<<endl;
//     }
//     else{
//         cout<<1<<endl;  
//     }
//     return;
//    }
   s--; e--;
   int ans=0;
   int ind=s;
   int count=n;
   bool found=0;
   while(count--){
    int next=v[ind];
    if(next-1 == e){
        ans++;
        if(s==e)ans=0;
        found=1;
        break;
    }
    // if(next-1 == s ){
    //     ans=-1;
    //     break;
    // }
    ind = next-1;
    ans++;
   }
//    if(n==2)cout<<ans+1<<endl;
//    else 
   if(found)cout<<ans<<endl;
   else cout<<-1<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    int t=1;
    while(t--){
        solve();
    }
}
