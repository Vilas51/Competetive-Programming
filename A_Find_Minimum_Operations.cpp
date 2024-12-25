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
   ll n,k;
   cin>>n>>k;
   if(n<k){
    cout<<n<<endl;
    return;
   }
   if(n==k){
    cout<<1<<endl;
    return;
   }
   ll res;
   ll c=0;
   while(n>0){
    res=log(n)/log(k);
    n-=pow(k,res);
    c++;
   }
//    if(n>0&&n<k){
//     c+=n;
//    }
//    else if(n==k){
//     c+=1;
//    }
    cout<<c<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
