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
   int a=v[0],b=v[1]; bool flag=1;
   for(int i=0;i<n;i++){
    if(i&1){
        if(v[i]%2==0 && b%2==1 || v[i]%2==1 && b%2==0){
            flag=0;
            break;
        }
    }else{
        if(v[i]%2==0 && a%2==1 || v[i]%2==1 && a%2==0  ){
            flag=0;
            break;
        }
    }
   }
   if(flag){
    cout<<"YES";
   }else{
    cout<<"NO";
   }
   cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
