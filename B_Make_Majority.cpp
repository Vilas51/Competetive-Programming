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
   string s;
   int c0=0,c1=0;
//    bool f=0;
   cin>>s;
   if(s[0]==s[n-1]&&s[0]=='1'){
    cout<<"YES"<<endl;
    return;
   }
   bool f=0;
   for(int i=0;i<n;i++){
    if(s[i]=='1'){
        c1++;
        f=0;
    }
    else {
        if(!f){
            c0++;
            f=1;
        }
    }
   }
   if(c1>c0){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
