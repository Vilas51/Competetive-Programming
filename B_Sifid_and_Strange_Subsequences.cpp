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
//    int n; cin>>n;
//    vector<int>v(n);
//    for(int i=0;i<n;i++){
//     cin>>v[i];
//    }
//    auto x=max_element(v.begin(),v.end());
//    sort(v.begin(),v.end());
//    int count=0,res=0,c2=1; bool f;
//    for(int i=0;i<n-1;i++){
//     if(abs(v[i]-v[i+1])>=*x){
//         count+=i-c2; 
//         // f=0;
//     }else{
//         c2=i;
        // f=1;
    // }
    // else{
    //     count=1;
    // }
    // res=max(res,count);
//    }
//    if(res==n-1)c2=1;
//    cout<<res+c2<<endl;
   int n; cin>>n;
   vector<int>v(n);
   vector<int>v2;
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
    int mini=INT_MAX,c=0;
    for(int i=0;i<n;i++){
        if(v[i]<=0){
            c++; v2.pb(v[i]);
        }else{
            mini=min(mini,v[i]);
        }
    }
    sort(v.begin(),v.end());
    int diff=INT_MAX-1;
    for(int i=0;i<n-1;i++){
        if(v[i+1]<=0){
            diff=min(v[i+1]-v[i],diff);
        }
    }
    if(diff>=mini)c++;
    cout<<c<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
