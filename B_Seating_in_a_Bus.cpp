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
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
   vector<bool>a(n,0);
    for(ll i=0;i<n;i++){
        if(i==0){
            a[v[i]-1]=1;
        }
        else{
            ll j=v[i]-1;
            if(j==0){
                if(a[1]==0){
                    cout<<"NO"<<endl;
                    return;
                }
                a[j]=1;
            }
            else if(j==n-1){
                if(a[n-2]==0){
                    cout<<"NO"<<endl;
                    return;
                }
                a[j]=1;
            }
            else{
                if(a[j-1]!=0&&a[j+1]!=0){
                    cout<<"NO"<<endl;
                    return;
                }
                a[j]=1;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
