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
   int n,k,q; cin>>n>>k>>q;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   int c=0; ll ans=0; 
//    int i; int low=0;
   for(int i=0;i<n;i++){
    if(v[i]<=q){
        c++;
    }else{
        if(c>=k){
            ll x=(c-k)+1;
            while(x>0){
                ans+=x;
                x--;
            }
        }
        c=0;
        // low=i;
    }
   }
   if(c>=k){
        ll x=(c-k)+1;
        while(x>0){
            ans+=x;
            x--;
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
