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
   ll sum=0;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   ll c=0;
   for(int i=0;i<n;i++){
    if(v[i]>=k){
        sum+=v[i];
    }
    else if(v[i]==0){
        if(sum>0){
            c++;
            sum--;
        }
    }
   }
   cout<<c<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
