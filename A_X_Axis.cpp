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
   int x1,x2,x3;
   cin>>x1>>x2>>x3;
   int mini=INT_MAX;
   for(int i=1;i<=10;i++){
    int toto=abs(x1-i)+abs(x2-i)+abs(x3-i);
    mini=min(mini,toto);
   }
   cout<<mini<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
