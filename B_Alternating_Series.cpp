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
   if(n==2){
    cout<<-1<<" "<<2<<endl;
    return;
   }
   bool f=0;
   for(int i=0;i<n;i++){
    if(i%2==0){
        cout<<-1<<" ";
    }else{
        // if(f){
        //     cout<<2<<" ";
        //     f=0;
        // }else{
        if(i==n-1){
            cout<<2<<" ";
        }else{

            cout<<3<<" ";
        }
        //     f=1;
        // }
    }
   }cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
