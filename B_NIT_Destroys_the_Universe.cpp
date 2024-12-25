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
    vector<int>v(n);
    for(int i = 0;i<=n-1;i++){cin>>v[i];}
    if(count(v.begin(),v.end(),0)==n){
        cout<<0<<endl; return;
    }
    if(n==1 && v[0]!=0){
        cout<<1<<endl; return;
    }
    if( v[0]==0 || v[n-1]==0){
        int z=count(v.begin(),v.end(),0);
        if(z==1){
            cout<<1<<endl; return;
        }
    }
    // bool flag=1; int fi=-1,li=-1;
    // for(int i=0;i<n;i++){
    //     if(flag==1){
    //         if(v[i]==0){
    //             fi=i;
    //             flag=0;
    //         }
    //     }else{
    //         if(v[i]==0){
    //             if(i>li){
    //                 li=i;
    //             }
    //         }
    //     }
    // }
    if(count(v.begin(),v.end(),0)==2 && v[0]==0 && v[n-1]==0 ){
         cout<<1<<endl; 
    }
    else{
        cout<<2<<endl;
    }
    v.clear();
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
