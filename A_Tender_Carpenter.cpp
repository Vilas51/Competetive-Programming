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
void solve() {
   int n;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; i++) {
       cin >> v[i];
   }
   set<tuple<int, int, int>> s;
   for (int i = 0; i < n; i++) {
       for (int j = i + 1; j < n; j++) {
           for (int k = j + 1; k < n; k++) {
               if (v[i] + v[j] > v[k] && v[j] + v[k] > v[i] && v[k] + v[i] > v[j] && s.find({v[i], v[j], v[k]}) == s.end()) {
                   s.insert({v[i], v[j], v[k]});
               }
               if (s.size() >= 2) {
                   cout << "YES" << endl;
                   return;
               }
           }
       }
   }
   cout << "NO" << endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
