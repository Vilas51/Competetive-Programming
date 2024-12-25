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
    ll a, b;
    cin >> a >> b;
    
    ll original_b=b;

    // Special case when b is 1, increment b to avoid infinite loop
    if (b == 1) {
        b++;
    }
    ll steps = 0;

    ll original_a = a;

    // Calculate the number of steps required to reduce a to 0
    while (a > 0) {
        a /= b;
        steps++;
    }

    // Try different increments of b and find the minimum steps
    ll min_steps = steps;
    for (ll i = b + 1; i <= b + 100; i++) {
        a = original_a;
        steps = i - b;
        while (a > 0) {
            a /= i;
            steps++;
        }
        min_steps = min(min_steps, steps);
    }
    if(original_b==1){
        cout << min_steps + 1 << endl;
    }
    else cout << min_steps << endl;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
