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
   bool f=1;
   for(auto x:m){
    if(x.second==1){
        f=0;
        break;
    }
   }
   if(!f){
    cout<<-1<<endl;
    return;
   }
    bool f2=0;
   int i=1,j=n;
   for(int k=1;k<n;k++){
    if(!f2 && v[k]==v[k-1]){
        cout<<j<<" ";
        j--;
        f2=1;
    }else{
        f2=0;
        cout<<i<<" ";
        i++;
    }
   }
   cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
