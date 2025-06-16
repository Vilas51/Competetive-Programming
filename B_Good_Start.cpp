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
   ll w,h,a,b;
   cin>>w>>h>>a>>b;
   ll x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   if((w*h)%(a*b)!=0){
    cout<<"NO"<<endl;
    return;
   }
//    x1+=a;
//    y1+=b;
//    if(x2<x1){
//     swap(x1,x2);
//     swap(y1,y2);
//    }
   if((x2-x1)%a==0||(y2-y1)%b==0){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
