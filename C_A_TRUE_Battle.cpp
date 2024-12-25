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

// int solve1()


void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int c=0;
   for(int i=0;i<n;i++){
    if(s[i]=='1'){
        c++;
    }
   }
    if(c>n/2||s[n-1]=='1'){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
//    if(n%2==0){
//    }
//    else{

//    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
