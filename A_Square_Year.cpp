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
   string s;
   cin>>s;
   int num=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0')*1;
   int sq=sqrt(num);
   if(sq*sq==num){
    cout<<0<<" "<<sq<<endl;
   }else{
    cout<<-1<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
