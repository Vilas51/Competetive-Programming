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
   
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin>>n;
    vector<ll>v(n-1);
    bool f=0;
    ll sum=0;
    ll ind=0;
    ll ele=-1;
    for(ll i=0;i<n-1;i++){
        cin>>v[i];
        sum+=v[i];
        if(v[i]<v[i-1]){
            f=1;
            ele=v[i];
            if(i!=n-2){
                ind=-1;
            }
        }
    }
    // if(ele!=-1){
    //     cout<<sum+ele<<endl;
    //     return 0;
    // }
    // if(ind==-1){
    //     cout<<sum<<endl;
    //     return 0;
    // }
    if(!f)sum+=v[0];
    // else sum+=v[n-2];
    cout<<sum<<endl;
}

