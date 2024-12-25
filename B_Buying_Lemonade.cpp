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
   unordered_map<int,int>mp;
   ll sum=0;
   bool f=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
    if(sum==k||mp.find(mp[k-v[i]])!=mp.end()){
        f=1;
    }
    if(mp.find(v[i])==mp.end()){
        mp[v[i]]++;
    }
   }
   if(f){
    cout<<k<<endl;
    return;
   }
   sort(v.begin(),v.end());
   ll sum2=0;
   for(int i=0;i<n;i++){
    sum+=v[i];
    if(sum>v[i]){
        break;
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
