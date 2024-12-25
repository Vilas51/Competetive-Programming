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
 int x,y; 
 cin>>x>>y;
 int z=y/2;
 if(y%2!=0){
    z++;
 }
 int jaga=z*15-(y*4);
 if(x<=jaga){
 cout<<z<<endl;
 }
 else{
    int t=x-jaga;
     z+=(t/15);
    if(t%15!=0){
        z++;
    }
    cout<<z<<endl;
 }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
