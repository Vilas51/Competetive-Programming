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
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int r1 = min(a, m);
    int r2 = min(b, m);
    int rw1 = m - r1;
    int rw2 = m - r2;
    int rm = min(c, rw1 + rw2);
    cout << r1 + r2 + rm << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
