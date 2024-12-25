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
   vector<int>v(2*n);
   int c0=0,c1=0;
   for(int i=0;i<2*n;i++){
    cin>>v[i];
    if(v[i]==0){
        c0++;
    }else{
        c1++;
    }
   }
   if(c1==2*n||c0==2*n){
    cout<<0<<" "<<0<<endl;
    return;
   }
   if(c0%2==0&&c1%2==0){
    cout<<0<<" "<<min(c0,c1)<<endl;
   }else{
    cout<<1<<" "<<min(c0,c1)<<endl;
   }

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
