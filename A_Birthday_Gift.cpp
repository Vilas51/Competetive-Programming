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
   ll l,a,b,r;
   cin>>l>>a>>b>>r;
   ll left=abs(a-l)+abs(b-l);
   ll right=abs(a-r)+abs(b-r);
   ll mid=abs(a-(l+r)/2)+abs(b-(l+r)/2);
   cout<<max(left,max(mid,right))<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
