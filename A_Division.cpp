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
   int n ; cin>>n;
   if(n<=1399){
    cout<<"Division 4"<<endl;
   }
   else if(n>=1400 && n<=1599){
    cout<<"Division 3"<<endl;
   }
   else if(n>=1600 && n<=1899){
    cout<<"Division 2"<<endl;
   }
   else{
    cout<<"Division 1"<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
