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
   int arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
   if(count(arr+1,arr+n-1,1)==n-2){
    // cout<<count(arr+1,arr+n-1,0)<<" ";
    cout<<"NO"<<endl; return;
   }
   if(arr[0]%2==0&& arr[n-1]%2==0){
    cout<<"NO"<<endl; return;
   }
   for(int i=1;i<n-1;i++){
    if(arr[i]%2==0 ){
        cout<<"NO"<<endl;
        return;
    }
    if(abs(arr[i]-arr[i-1])>(2*arr[i])|| abs(arr[i]-arr[i+1])>(2*arr[i])){
        cout<<"NO"<<endl;
        return;
    }
   }
   cout<<"YES"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}