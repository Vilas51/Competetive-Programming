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
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   int mini=v[0],mindiff=v[0];
   bool f=0;
   for(int i=1;i<n;i++){        
    if(v[i]<v[i-1]){
        if(v[i-1]-v[i]<mindiff){
            cout<<"NO"<<endl;
            return;
        }
    }
    // if(!f){
    //     mindiff=v[i]-mini;
    //     f=1;
    // }else{
        mindiff=min(mindiff,v[i]-min(mindiff,v[i]));
    // }
   }
   cout<<"YES"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
