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
   bool flag=0,f2=0;
   for(int i=0;i<n;i++){
    if(flag==0){
        for(int j=0;j<n;j++){
            if(j%2==0){
                cout<<"##";
            }else{
                cout<<"..";
            }
        }cout<<endl;
        for(int j=0;j<n;j++){
            if(j%2==0){
                cout<<"##";
            }else{
                cout<<"..";
            }
        }cout<<endl;
        flag=1;
    }
    else{
        for(int j=0;j<n;j++){
            if(j%2==1){
                cout<<"##";
            }else{
                cout<<"..";
            }
        }cout<<endl;
        for(int j=0;j<n;j++){
            if(j%2==1){
                cout<<"##";
            }else{
                cout<<"..";
            }
        }cout<<endl;
        flag=0;
    }
    
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
