#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define loop(i,a,b) for(ll i = a; i <= b; i++)
#define rloop(i,a,b) for(ll i = a; i >= b; i--)
#define mod 1000000007
ll calc_f(ll m){
    if(m == 0) return 0;
    if(m == 1) return 0;
    ll mm = m - 1;
    int p = 63 - __builtin_clzll(mm); 
    return (m == (1LL << p)) ? (1LL << p) - 1 : (1LL << (p + 1)) - 1;
}
void solve(){
    int n; ll x;
    cin >> n >> x;
    int bm = 0;
    for(int m = 0; m <= n; m++){
        if(m == 0) bm = 0;
        else{
            ll base = calc_f(m);
            if((base & (~x)) != 0) continue;
            int need = (base == x) ? m : m + 1;
            if(need <= n) bm = m;
        }
    }
    vector<ll> d;
    if(bm == 0) d.push_back(x);
    else{
        for(int i = 0; i < bm; i++) d.push_back(i);
        ll base = calc_f(bm);
        if(base != x) d.push_back(x & (~base));
    }
    vector<ll> ans;
    for(auto num : d) ans.push_back(num);
    ll fillr = (bm > 0 ? 0LL : x);
    while(ans.size() < (size_t)n) ans.push_back(fillr);
    for(auto num : ans) cout << num << " ";
    cout << "\n";
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
}
