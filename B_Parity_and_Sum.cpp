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
   ll n; cin>>n;
   ll ans=0;
   vector<ll>v(n);
   ll maxodd=LLONG_MIN;
   ll maxeven=LLONG_MIN;
   vector<ll>toto;
   vector<ll>moto;
   for(int i=0;i<n;i++){
     cin>>v[i];
    if(v[i]%2==0){
        ans++;
        maxeven=max(maxeven,v[i]);
        toto.pb(v[i]);
    }
    else{
        maxodd=max(maxodd,v[i]);
        // moto.pb(v[i]);
    }
   }
   if(ans==n){
    cout<<0<<endl;
    return;
   }
   ll lala=ans;
//    ans=0;
   sort(toto.begin(),toto.end());
   for(int i=0;i<toto.size();i++){
        if(toto[i]<maxodd){
            maxodd+=toto[i];
            // ans++;
        }
        else{
            ans++;
            break;
        }
   }
//    if(f==1)cout<<2+toto.size()-1<<endl;
//    else cout<<ans<<endl;
   cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
