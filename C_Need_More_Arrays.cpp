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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll count=1;
    bool flag=0,flag2=0;
    int prev=v[0];
    for(ll i=1;i<n;i++){
        if(prev+1<v[i]){
        count++;
        prev=v[i];
    }
   }
//    if(!flag)cout<<(n+1)/2<<endl;
//    else if(!flag2)cout<<n<<endl;
//    else 
cout<<count<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
