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
int sum(int x){
    int summ=0;
    while(x>0){
        summ+=x%10;
        x/=10;
    }
    return summ;
}
void solve(){
    int x,y;
    cin>>x>>y;
    int currx=x,curry=y;
    bool f=1;
    while(currx>0){
        if(x%10!=9){
            f=0;
        }
        currx/=10;
    }
    if(f&&y==1){
        cout<<"YES"<<endl;
        return;
    }
    // for(int i=0;i<100000;i++){
        if(sum(x)==9&&1==y){
            cout<<"YES"<<endl;
            return;
        }
    // }
    cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
