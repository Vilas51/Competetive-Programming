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
   int n,m,k;
   cin>>n>>m>>k;
   string s;
    cin>>s;
    ll i=0;
    ll ans=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c++;
        }else{
            c=0;
        }
        if(c==m){
            ans++;
            c=0;
            i+=k-1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
