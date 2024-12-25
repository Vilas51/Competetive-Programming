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
// void solve(){
//    ll n; cin>>n; ll k; cin>>k;
//    if(n==1 && k==1){
//     cout<<"YES"<<endl; return;
//    }
//    ll x=n/3; ll y=(n/3)*2;
//    if(x+y==n &&k==x || k==y&&n%3==0){
//     cout<<"YES"<<endl; return;
//    }
//    if(x+y!=n||n%3!=0){
//     cout<<"NO"<<endl; return;
//    }
//    vector<ll>v;
//    if(x>0&&x%3==0){
//         v.pb(y);
//     }
//     if(y>0&&y%3==0){
//         v.pb(x);
//     }
//    ll i=0; bool f=0;
//    while(i<v.size()){
//     x=v[i]/3; y=(v[i]/3)*2; 
//     if(x+y==v[i]){
//         if(k==x||k==y){
//             f=1; break;
//         }
//     }if(x>0&&x%3==0){
//         v.pb(y);
//     }
//     if(y>0&&y%3==0){
//         v.pb(x);
//     }
//     i++;
//    } 
//    if(f)cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;
// }
bool solve(int n,int k){
    if(n==k)return true;
    bool ans=0;
    if(n>0){
        if(n%3!=0){
            return false;
        }
        ans|=solve(n/3,k);
        ans|=solve(2*n/3,k);
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        if(solve(n,k)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
