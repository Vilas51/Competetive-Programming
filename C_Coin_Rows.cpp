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
   ll m;
   cin>>m;
   vector<vector<ll>>v(2,vector<ll>(m));
   for(ll i=0;i<2;i++){
    for(ll j=0;j<m;j++){
        cin>>v[i][j];
    }
   }
   if(m==1){
    cout<<0<<endl;
    return;
   }
   vector<ll>pahila(m,0),dusra(m,0);
   dusra[0]=v[1][0];
   for(ll i=1;i<m-1;i++){
    dusra[i]=v[1][i]+dusra[i-1];
   }
   pahila[m-1]=v[0][m-1];
   for(ll i=m-2;i>=1;i--){
    pahila[i]=v[0][i]+pahila[i+1];
   }
   ll ans=LLONG_MAX;
   for(int i=1;i<m-1;i++){
    ans=min(ans,max(pahila[i+1],dusra[i-1]));
    // ans=min(ans,min(pahila[i],dusra[i]));
   }
   ans=min(ans,dusra[m-2]);
   ans=min(ans,pahila[1]);
   cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
