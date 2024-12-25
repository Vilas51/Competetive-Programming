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
   ll n,k; cin>>n>>k; vector<ll>v(n);
   ll sum=0;
   for(int i=0;i<n;i++){
    cin>>v[i]; sum+=v[i];
   }
    int i=0,j=n-1;
    sort(v.begin(),v.end());
    for(int l=0;l<k;l++){
        if(i+2<j){
            ll t=v[i]+v[i+1];
            if(sum-v[j]==sum-t){
                l++; continue;
            }
            if(sum-v[j]>sum-t){
                sum=sum-v[j]; i+=2;
            }else{
                sum=sum-t; j--;
            }
        }
        else{
            if(i<j){
                sum-=v[j]; j--;
            }
        }
    }
    cout<<sum<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
