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
   ll n,m,q;
   cin>>n>>m>>q;
   vector<ll>team(n),slide(m);
   for(int i=0;i<n;i++){
    cin>>team[i];
   }
   for(int i=0;i<m;i++){
    cin>>slide[i];
   }
   for(int i=0;i<=q;i++){
    bool f=false;
    ll x,y;
    cin>>x>>y;
    ll k=0;
    set<ll>sasa;
    for(int j=0;j<x;j++){
        if(k<y){
            if(sasa.find(slide[j])==sasa.end()){
                sasa.insert(team[k]);
                k++;
            }
        }
        if(sasa.find(slide[j])==sasa.end()){
            f=true;
            break;
        }
    }
    if(f)cout<<"TIDAK"<<endl;
    else cout<<"YA"<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
