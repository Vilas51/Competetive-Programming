#include <iostream>
#include<string>
using namespace std;
#define ll long long 
#define pb push_back
#define endl "\n"
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define f(i,a,b) for(ll i = a;i<=b;i++)
#define ff(i,a,b) for(ll i=a ;i>=b;i--)
#define mod 1000000007
void solve(){
   int n; cin>>n;
   string s; cin>>s; 
   if(n==1|| n==2 && s[0]!='W' && s[1]=='W'||n==2 && s[0]=='W' && s[1]!='W'){
    cout<<"NO"<<endl; return;
   }
   bool flag=1;
   for(int i=1;i<n-1;i++){
    if(s[i-1]=='B' && s[i]=='W' && s[i+1]=='B'|| 
    s[i-1]=='R' && s[i]=='W' && s[i+1]=='B'
    ){
        flag=0;
        break;
    }
   }
   if(flag){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
