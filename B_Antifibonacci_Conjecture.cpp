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
unordered_set<ll> fib_set;
void precompute_fib() {
    ll a = 1, b = 1;
    fib_set.insert(a);
    fib_set.insert(b);
    while(true) {
        ll c = a + b;
        if (c > 1e17) break;
        fib_set.insert(c);
        a=b;
        b=c;
    }
}
void solve() {
    ll x;
    cin >> x;
    for (ll a = 1; a <= x / 2; a++) {
        ll b = x - a;
        if (fib_set.find(a) == fib_set.end() && fib_set.find(b) == fib_set.end()) {
            cout << "YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    precompute_fib();
    while(t--){
        solve();
    }
}
