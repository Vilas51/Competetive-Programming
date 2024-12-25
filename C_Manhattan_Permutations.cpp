#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define ff(i,a,b) for(ll i=a;i>=b;i--)
#define mod 1000000007
void solve(){
   ll n,k; 
   cin>>n>>k;
   vector<int>v(n+1,0);
   for(int i=1;i<=n;i++){
    v[i]=i;
   }
   if(k%2!=0){
    cout<<"No"<<endl;
    return;
   }
    for(int i=1;i<=n/2;i++){
        if(k>=(n-i*2+1)*2){
            v[i]=n-i+1;
            v[n-i+1]=i;
            k-=(n-i*2+1)*2;
        }
        else{
            swap(v[i],v[i+k/2]);
            k=0;
            break;
        }
    }
    if(k!=0){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
        for(int i=1;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
