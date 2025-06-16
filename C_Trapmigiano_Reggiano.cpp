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
bool isPermutation(vector<ll>& arr) {
    ll n = arr.size();
    vector<bool> seen(n + 1, false);

    for (ll num : arr) {
        if (num < 1 || num > n || seen[num]) 
            return false;
        seen[num] = true;
    }
    return true;
}

void solve() {
    ll n, st, en;
    cin >> n >> st >> en;
    st--, en--;

    vector<vector<ll>> adj(n);
    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        u--, v--; 
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<ll> parent(n, -1);
    queue<ll> q;
    q.push(st);
    parent[st] = st;

    while (!q.empty()) {
        ll curr = q.front();
        q.pop();
        for (auto neighbor : adj[curr]) {
            if (parent[neighbor] == -1) {
                parent[neighbor] = curr;
                q.push(neighbor);
            }
        }
    }
    vector<ll> path;
    ll node = en;
    while (node != st) {
        path.pb(node);
        node = parent[node];
    }
    path.pb(st);
    reverse(path.begin(), path.end());
    vector<bool> used(n, false);
    vector<ll> perm;
    
    for (ll node : path) {
        perm.pb(node + 1);
        used[node] = true;
    }

    for (ll i = 0; i < n; i++) {
        if (!used[i]) perm.pb(i + 1);
    }

    for (ll i : perm) cout << i << " ";
    cout << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
