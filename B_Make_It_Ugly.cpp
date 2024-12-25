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
   int n ;cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   bool f=0;
   for(int i=0;i<n-1;i++){
    if(v[i]!=v[i+1]){
        f=1; break;
    }
   }
   if(!f){
    cout<<-1<<endl; 
    return;
   }
   int count=0,fir=v[0];
   int res=n;
   for(int i=0;i<n;i++){
    if(v[i]==fir){
        count++;
    }
    else{
        res=min(res,count);
        count=0;
    }
   }
   res=min(res,count);
   cout<<res<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
