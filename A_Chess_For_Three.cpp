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
   int a,b,c;
   cin>>a>>b>>c;
   if(a==0 &&b==0&&c==0){
    cout<<0<<endl;
    return;
   }
   if((a+b+c)%2!=0 ){
    cout<<-1<<endl;
    return;
   }
   int total=floor((a+b+c)/2);
   int ans=0;
   ans+=min(a,c);
   ans+=min(b,c);
    cout<<min(ans,total)<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
