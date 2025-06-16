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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < m; i++) cin >> b[i];
    sort(b.begin(), b.end());
    ll curr = a[0];
    for (ll i = 0; i < m; i++) {
        curr = min(curr, b[i] - a[0]);
    }
    a[0]=curr;
    // cout<<curr<<" ";
    for (ll i = 1; i < n; i++) {
        ll req = curr + a[i];
        auto it = lower_bound(b.begin(), b.end(), req);
        if (it == b.end() && a[i] < curr||it!=b.end()&&*it - a[i]<a[i-1]&&a[i]<curr) {
            cout << "NO" << endl;
            return;
        }
        bool f=0;
        if(a[i]>=a[i-1]){
            curr=a[i];
            f=1;
        }
        if (it != b.end()&&*it - a[i]>=a[i-1]) {
            if(f)curr = min(curr, *it - a[i]); 
            else curr=*it - a[i];
        }
        a[i] = curr;
        // cout<<curr<<" ";
    }
    cout << "YES" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
