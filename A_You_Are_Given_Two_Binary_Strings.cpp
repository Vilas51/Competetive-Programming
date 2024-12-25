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
   string s1,s2;
   cin>>s1>>s2;
   ll ans=log2(stoll(s1))+log2(stoll(s2))*pow(2,1);
   string s3=to_string(ans);
   reverse(s3.begin(),s3.end());
   cout<<s3<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
