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
   ll n; cin>>n;
   ll j=1; ll k=0; bool f=0,f2=0;
   for(ll i=0;i<n;i++){
    if(i%2==1){
        if(f==0){
            cout<<j+k+1<<" ";
            f=1;
        }else{
            cout<<j+k<<" ";
            f=0;
        }
    }else{
        if(f2==0){
            cout<<j+k<<" "; f2=1;
        }else{
            cout<<j+k<<" "; f2=0;
        }
    }
    j+=k;
    k++;
   }
   cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
