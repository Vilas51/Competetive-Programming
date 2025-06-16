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
int to=1;
void solve(){
   ll n,k;
   cin>>n>>k;
   vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll sum=0;
    if(n==1){
        sum+=v[0];
    }
    else{
        for(int i=n-1;i>=1;i--){
            if(i!=1)sum+=v[0]*2;
            else sum+=v[0];
        }
    }
    // cout<<sum<<" ";
    if(sum>k)cout<<"Case #"<<to<<": NO"<<endl;
    else cout<<"Case #"<<to<<": YES"<<endl;
    to++;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
