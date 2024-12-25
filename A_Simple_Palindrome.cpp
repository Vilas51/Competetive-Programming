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
   int n;
   cin>>n;
   string s="aeiou";
   vector<int>v(5,n/5);
   for(int i=0;i<n%5;i++){
    v[i]++;
   }
   for(int i=0;i<5;i++){
    for(int j=0;j<v[i];j++){
        cout<<s[i];
    }
   }cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
