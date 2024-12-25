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
   vector<ll>v(n);
   ll maxi1=INT_MIN,maxi2=INT_MIN;
   ll c1=0,c2=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
    if(i%2==0){
        maxi1=max(maxi1,v[i]);
        c1++;
    }else{
        maxi2=max(maxi2,v[i]);
        c2++;
    }
   }
   if(maxi1>maxi2){
    cout<<maxi1+c1<<endl;
   }
   else if(maxi1==maxi2){
    cout<<maxi1+max(c1,c2)<<endl;
   }
   else{
    cout<<maxi2+c2<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
