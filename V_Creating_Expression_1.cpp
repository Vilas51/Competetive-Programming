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
bool solve(vector<ll>&v,ll i,ll n,ll res, ll k){
    bool ans=0;
    if(i==n){
        if(res==k){
            return true;
        }
        return false;
    }
    ans|=solve(v,i+1,n,res+v[i],k);
    ans|=solve(v,i+1,n,res-v[i],k);
    return ans;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    f(i,0,n-1)cin>>v[i];
    if(solve(v,1,n,v[0],k)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
