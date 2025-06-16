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
   string s;
   cin>>s;
   int counts=0;
   for(int i=0;i<n;i++){
    if(s[i]=='<'){
        counts++;
    }
   }
   cout<<counts+1<<" ";
   int countg=counts+2;
   for(int i=0;i<n-1;i++){
    if(s[i]=='<'){
        cout<<counts--<<" ";
    }else{
        cout<<countg++<<" ";
    }
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
