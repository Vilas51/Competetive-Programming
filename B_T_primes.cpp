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

const ll n=1e6+1;
vector<bool>prime(n+1,true);

void sieve(){
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for (int j=i*i;j<=n;j+=i) {
                prime[j]=false;
            }
        }
    }
}

void solve(){
   ll x;
   cin>>x;
   if(x==4||x==9){
    cout<<"YES"<<endl;
    return;
   }
   if(x==1){
    cout<<"NO"<<endl; return;
   }ll tot=sqrt(x);
    if(tot*tot==x&&prime[tot]){
        // cout<<tot<<" ";
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}



int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    sieve();
    int t; cin>>t;
    while(t--){
        solve();
    }
}
