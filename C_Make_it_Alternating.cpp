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
    int m=998244353;
    string s;
    cin>>s;
    int n=s.size();
    int i=1;
    ll minop=0;
    ll minsubop=0;
    while(i<n){
        if(s[i]==s[i-1]){
            int c=1;
            while(i<n && s[i]==s[i-1]){
                i++;
                c++;
            }
            minop+=c-1;
            minsubop+=(c*(c-1))%m;
            // cout<<c<<" ";
        }
        else i++;
    }
    cout<<minop<<" ";
    if(minsubop==0)cout<<1<<endl;
    else cout<<minsubop<<endl;
   
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
