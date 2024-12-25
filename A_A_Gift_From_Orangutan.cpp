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
   vector<ll>a(n),b(n),c(n);
   ll mini=INT_MAX,maxi=INT_MIN;
   ll mama=INT_MIN,mami=INT_MAX;
   for(int i=0;i<n;i++){
    cin>>a[i];
    mama=max(mama,a[i]);
    mami=min(mami,a[i]);
   }
   sort(a.rbegin(),a.rend());
   for(int i=0;i<n;i++){
    b[i]=max(maxi,a[i]);
    maxi=max(maxi,a[i]);
    c[i]=min(mini,a[i]);
    mini=min(mini,a[i]);
   }
//    sort(b.rbegin(),b.rend());
//    sort(c.begin(),c.end());
   ll sum=0;
    for(int i=0;i<n;i++){
        sum+=(b[i]-c[i]);
    }
    cout<<(mama-mami)*(n-1)<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
