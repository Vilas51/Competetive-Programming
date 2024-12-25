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
   int n;
   cin>>n;
   vector<int>a(n),b(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    cin>>b[i];
   }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]-b[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(maxi==a[i]-b[i])c++;
    }
    cout<<c<<endl;
    for(int i=0;i<n;i++){
        if(maxi==a[i]-b[i])cout<<i+1<<" ";
    }cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
