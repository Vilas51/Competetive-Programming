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
   ll n,k,b,s;
   cin>>n>>k>>b>>s;
   if(s==0 && b==0){
    for(ll i=0;i<n;i++){
        cout<<0<<" ";
    }cout<<endl;
    return;
   }
   if(b*k+(n)*(k-1)<s || s<k*b){
    cout<<-1<<endl; return;
   }
   vector<ll>ans(n,0);
   ans[0]=k*b;
   s-=k*b;
   for(ll i=0;i<n;i++){
    if(s>=k-1){
        ans[i]+=k-1;
        s-=(k-1);
    }else{
        ans[i]+=s;
        s=0;
    }if(s==0)break;
   }
   for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
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
