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
   string a,b;
   cin>>a>>b;
   ll c=0;
    for(int i=1;i<n-1;i++){
        if(a[i-1]=='x'&&a[i]=='.'&&a[i+1]=='x'&&b[i-1]=='.'&&b[i]=='.'&&b[i+1]=='.'||b[i-1]=='x'&&b[i]=='.'&&b[i+1]=='x'&&a[i-1]=='.'&&a[i]=='.'&&a[i+1]=='.'){
            c++;
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
