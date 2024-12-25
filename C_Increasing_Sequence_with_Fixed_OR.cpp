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
   ll n;
   cin>>n;
   if(n==1){
    cout<<1<<endl;
    cout<<1<<endl;
    return;
   }
   if(n==2){
    cout<<1<<endl;
    cout<<2<<endl;
    return;
   }
   ll t=n;
   vector<ll>v(64,0);
   int count=0;
   bool f=0;
   for(int i=0;i<64;i++){
        if(n&(1LL<<i)){
            v[i]=1; count++;
        }
   }
   if(v[0]==1){
    f=1;
   }
   int i=0;
   int j=0;
   int k=log2(t);
   int toto=0;
   if(count==1){
    cout<<1<<endl;
    cout<<n<<endl;
    return;
   }
   cout<<count+1<<endl;
    for(int i=64;i>=0;i--){
        if(v[i]==1){
            ll temp=0;
            for(int j=0;j<64;j++){
                if(i!=j&&v[j]==1){
                    temp+=(1LL<<j);
                }
            }
            cout<<temp<<" ";
            count--;
            if(count==0)break;
        }
    }
    cout<<t<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
