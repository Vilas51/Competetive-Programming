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
   int n; cin>>n;
   vector<int>v(n);
   map<int,int>m;
   for(int i=0;i<n;i++){
    cin>>v[i];
    m[v[i]]++;
    }
   for(int i=0;i<n;i++){
    if(m[v[i]]>=3){
        cout<<v[i]<<endl;
        return;
    }
   }
   cout<<-1<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
