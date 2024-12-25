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
//    setprecision(1);
//     float y=float(n/2);
//     // if(n%2!=0){
//     // y*=1.5;
//     // }
//     int x=int(ceil(y*b));
//    cout<<min(int(a*n),x)<<endl;
        int n; int a,b;
        cin>>n>>a>>b;
        int z;
        if (b<a*2) z=(n/2)*b+(n%2)*a;
        else z=n*a;
        cout<<z<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
