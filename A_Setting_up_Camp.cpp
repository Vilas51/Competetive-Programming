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
   int a,b,c; cin>>a>>b>>c;
   if(b%3!=0&& c<3-(b%3)){
    cout<<-1<<endl; return;
   }
    int count=a;
    count+=(b/3);
    if(b%3!=0){
        count+=1;
        c-=(3-(b%3));
    }
    count+=(c/3);
    if(c%3!=0){
        count+=1;
    }
    cout<<count<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
