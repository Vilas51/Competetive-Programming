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
   int n,k;
   cin>>n>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   int ans=-1;
   for(int i=0;i<n;i++){
    bool f=1;
    for(int j=0;j<n;j++){
        if(i==j)continue;
        else {
            if(abs(v[i]-v[j])%k==0){
                f=0;
                break;
            }
        }
    }
    if(f){
        ans=i+1;
        break;
    }
   }
   if(ans==-1){
    cout<<"NO"<<endl;
   }else{
    cout<<"YES"<<endl;
    cout<<ans<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
