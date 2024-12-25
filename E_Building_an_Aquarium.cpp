#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i, a, b) for (ll i = a; i <= b; i++)
#define ff(i, a, b) for (ll i = a; i >= b; i--)
#define mod 1000000007
ll trap(vector<ll>& height) {
    ll n = height.size();
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
      if(height[0]-height[i] > 0)
        ans += height[0]-height[i];
    }

    return ans;
}

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
      cin>>a[i];
    }
    ll l = 0, r = 4e13;
    while (r > l + 1) {
      ll mid = (l + r) / 2;
      ll ans = 0;
      for (int i=0;i<n;i++) {
        ans += max(0LL, mid - a[i]);
      }
      if (ans <= x) {
        l = mid;
      } else {
        r = mid;
      }
    }
    cout << l << "\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
