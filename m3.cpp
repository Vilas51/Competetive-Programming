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
ll toto=1;
void solve(){
   ll g,w,l;
   cin>>w>>g>>l;
   cout<<"Case #"<<toto<<": ";
   if(l>0){
    cout<<abs((w-g)*(2*l+1))%mod<<endl;
   }else{
    cout<<abs(w-g)%mod<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
