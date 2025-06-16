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
#define stp setprecision
ll toto=1;
void solve(){
    // int n; cin>>n; 
    // vector<pair<int,int>>v(n); 
    // for(int i=0;i<n;i++){ 
    //     cin>>v[i].first>>v[i].second; 
    // } 
    // vector<double>lo(n),up(n); 
    // for(int i=0;i<n;i++){ 
    //     if(v[i].second==0){ 
    //         lo[i]=1e9; 
    //         continue; 
    //     } 
    //     lo[i]=double(double((i+1))/double(v[i].second)); 
    // } 
    // for(int i=0;i<n;i++){ 
    //     if(v[i].first==0){ 
    //         up[i]=1e9; 
    //         continue; 
    //     } 
    //     up[i]=double(double((i+1))/double(v[i].first)); 
    // } 
    // sort(lo.begin(),lo.end()); 
    // sort(up.begin(),up.end()); 
    // double ma=lo[n-1]; 
    // double mi=up[0]; 
    // if(mi>=ma)cout<<fixed<<setprecision(6)<<ma<<endl;
    // else cout<<-1<<endl;
    ll n;
    cin>>n;
    double s=0.0,p=1e9;
    for (ll i=1;i<=n;++i) {
        ll one,two;
        cin>>one>>two;
        double mini=double(i)/two;
        double maxi=one>0?double(i)/one:1e9;
        s=max(s,mini);
        p=min(p,maxi);
        if(s>p){
            s=-1;
            break;
        }
    }
    if(s==-1)cout<<"Case #"<<toto<<": -1"<<endl;
    else cout<<"Case #"<<toto<<": "<<fixed<<setprecision(6)<<s<<endl;
    toto++;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    int k=1;
    while(t--){
        // cout<<"Case #";
        // cout<<k;
        // cout<<": ";
        solve();
        // k++;
    }
}
