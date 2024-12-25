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
   int n;
    int64_t k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    auto total = accumulate(a.begin(), a.end(), int64_t(0));
    if (total <= k) {
      cout << n << '\n';
      return;
    }
    int64_t x = (k + 1) / 2;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] <= x) {
        x -= a[i];
        a[i] = 0;
        ans += 1;
      } else {
        break;
      }
    }
    x = k / 2;
    for (int i = n - 1; i >= 0; i--) {
      if (a[i] <= x) {
        x -= a[i];
        a[i] = 0;
        ans += 1;
      } else {
        break;
      }
    }
    cout << ans << '\n';
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
