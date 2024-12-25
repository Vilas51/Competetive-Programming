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
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   if(c>a && c<b && d>a && d<b||c<a && c>b && d<a && d>b||c>a && c>b && d<a && d<b||c<a && c<b && d>a && d>b||c<a && c<b && d<a && d<b||c>a && c>b && d>a && d>b){
    cout<<"NO"<<endl;
   }else{
    cout<<"YES"<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
