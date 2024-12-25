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
int toto =0;
void solve(){
    toto++;
   ll n,x;
   cin>>n>>x;
   vector<ll>v(n);
   vector<ll>ex;
   set<ll>nana;
   for(ll i=0;i<n;i++){
    cin>>v[i];
    nana.insert(v[i]);
   }
   sort(v.begin(),v.end());
   for(ll i=1;i<n;i++){
    if(v[i]==v[i-1])ex.pb(v[i]);
   }
//    if(toto==14){
//     cout<<n<<" "<<x<<endl;
//    }
   ll j=0;
   if(ex.size()>0){
    sort(ex.begin(),ex.end());
   }
   ll i=0;
    for(ll x:nana){
        if(x!=i){
            if(ex.size()>0&&j<ex.size()){
                if(ex[j]>i){
                    cout<<i<<endl;
                    return;
                }
                // ll y=(i-ex[j])/x;
                if((i-ex[j])%x==0){
                    j++;
                }else{
                    cout<<i<<endl;
                    return;
                }
            }else{
                cout<<i<<endl;
                return;
            }
        }
        i++;
    }bool f=0;
    while(j<ex.size()){
        if(!f)f=1;
        if(ex[j]>i){
            cout<<i<<endl;
            return;
        }
        // ll y=(i-ex[j])/x;
        if((i-ex[j])%x==0){
            j++;
        }else{
            cout<<i<<endl;
            return;
        }
        i++;
    }
    // if(f)i--;
    cout<<i<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
