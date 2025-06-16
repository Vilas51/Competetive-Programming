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
   int n,k,p;
   cin>>n>>k>>p;
   ll sum=0,count=0;
   bool flag=0;
   if(k==0){
    cout<<0<<endl;
    return;
   }
   for(int i=0;i<n;i++){
    sum+=p;
    count++;
    if(sum>=abs(k)){
        flag=1;
        break;
    }
   }
   if(flag){
    cout<<count<<endl;
   }else{
    cout<<-1<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
