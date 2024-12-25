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
    int n, m, q; cin >> n >> m >> q;
	vector<int> a(m);
	for (int i = 0; i < m; i++) cin >> a[i];
	sort(a.begin(), a.end());
	for (int i = 1; i <= q; i++) {
		int b; cin >> b;
		int k = upper_bound(a.begin(), a.end(), b) - a.begin(); // finding the first teacher at right
		if (k == 0) cout << a[0] - 1 << ' ';          // case 1
		else if (k == m) cout << n - a[m - 1] << ' '; // case 2
		else cout << (a[k] - a[k - 1]) / 2 << ' ';    // case 3
	}
	cout << "\n";
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
