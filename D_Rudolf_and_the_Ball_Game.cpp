#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i,a,b) for(ll i=(a);i<=(b);i++)
#define fb(i,a,b) for(ll i=(a);i>=(b);i--)
#define mod 1000000007
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<int, char>> v(m);
    f(i,0,m-1) {
        cin >> v[i].first >> v[i].second;
    }
    set<int> ans;
    ans.insert(k);
    for (int i = 0; i < m; i++) {
        if (v[i].second == '1') { // counterclockwise
            set<int> tans;
            for (auto it : ans) {
                int a = (it - v[i].first + n) % n;
                if (a == 0) a = n;
                tans.insert(a);
            }
            ans = tans;
        } else if (v[i].second == '0') { // clockwise
            set<int> tans;
            for (auto it : ans) {
                int a = (it + v[i].first - 1) % n + 1;
                tans.insert(a);
            }
            ans = tans;
        } else { // bidirectional
            set<int> tans;
            for (auto it : ans) {
                int a = (it + v[i].first - 1) % n + 1;
                tans.insert(a);
                int b = (it - v[i].first + n) % n;
                if (b == 0) b = n;
                tans.insert(b);
            }
            ans = tans;
        }
    }
    cout << ans.size() << "\n";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "\n";
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}