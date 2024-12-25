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
   int n; cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
    }
    int s=0,e=n-1;
    int left,right;
    bool f=1;
    while(s<e){
        if(v[s]!=v[e]){
            left=v[s];
            right=v[e];
            f=0;
            break;
        }
        s++; e--;
    }
    if(f){
        cout<<"YES"<<endl; return;
    }
    vector<int>v1;
    for(int i=0;i<n;i++){
        if(v[i]!=left){
            v1.pb(v[i]);
        }
    }
    bool f1=1;
    s=0,e=v1.size()-1;
    while(s<e){
        if(v1[s]!=v1[e]){
            f1=0;
            break;
        }
        s++; e--;
    }
    vector<int>v2;
    for(int i=0;i<n;i++){
        if(v[i]!=right){
            v2.pb(v[i]);
        }
    }
    bool f2=1;
    s=0,e=v2.size()-1;
    while(s<e){
        if(v2[s]!=v2[e]){
            f2=0;
            break;
        }
        s++; e--;
    }
    if(!f1&&!f2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}