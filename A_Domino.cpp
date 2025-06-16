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
   vector<vector<int>>v(n,vector<int>(2));
   bool f=0;
   for(int i=0;i<n;i++){
    cin>>v[i][0]>>v[i][1];
    if(v[i][0]%2!=0&&v[i][1]%2==0||v[i][0]%2==0&&v[i][1]%2!=0){
        f=1;
    }
   }
   int countodd1=0,countodd2=0;
   for(int i=0;i<n;i++){
    if(v[i][0]%2!=0)countodd1++;
   }
   for(int i=0;i<n;i++){
    if(v[i][1]%2!=0)countodd2++;
   }
   if(countodd1%2==0&&countodd2%2==0){
       cout<<0<<endl;
       return;
   }
    if(countodd1%2!=0&&countodd2%2!=0&&f&&n!=1){
        cout<<1<<endl;
        return;
    }
    // if(countodd1%2!=0&&countodd2%2!=0&&countodd1==countodd2&&countodd2==1&&!f){
    //     cout<<-1<<endl;
    //     return;
    // }
    // if(!f&&n!=1){
    //     cout<<2<<endl;
    //     return;
    // }
    cout<<-1<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t=1;
    while(t--){
        solve();
    }
}
