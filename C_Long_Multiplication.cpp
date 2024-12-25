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
   string a,b;
   cin>>a>>b;
   string x="",y="";
    int i;
   for(i=0;i<a.size();i++){
    if(a[i]==b[i]){
        x.pb(a[i]);
        y.pb(b[i]);
    }else{
        break;
    }
   }
   if(i==a.size()){
    cout<<a<<endl;
    cout<<b<<endl;
    return;
   }
   else{
    bool f=0;
    x.pb(a[i]);
    y.pb(b[i]);
    if(a[i]<b[i]){
        f=1;
    }
    i++;
    while(i<a.size()){
        if(f){
            x.pb(max(a[i],b[i]));
            y.pb(min(a[i],b[i]));
        }else{
            y.pb(max(a[i],b[i]));
            x.pb(min(a[i],b[i]));
        }
        i++;
    }
   }
   cout<<x<<endl;
   cout<<y<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
