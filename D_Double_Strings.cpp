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
static bool cmp(string a, string b){
    return a.size()<b.size();
}
void solve(){
   int n;
   cin>>n;
   string arr[n];
   map<string,bool>m;
   for(int i=0;i<n;i++){
    cin>>arr[i]; m[arr[i]]=0;
   }
//    its getting tle
   for(int i=0;i<n;i++){
    for(int j=0;j<arr[i].length();j++){
        string s=arr[i].substr(0,j);
        string t=arr[i].substr(j,arr[i].size()-j);
        if(m.find(s) !=m.end() && m.find(t) !=m.end()){
               m[arr[i]]=1;
               break;
        }
    }
   }
   for(int i=0;i<n;i++){
    if(m[arr[i]]==1){
        cout<<1;
    }
    else{
        cout<<0;
    }
   }
   cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t=1;
    int t; cin>>t;
    while(t--){
        solve();
    }
}
