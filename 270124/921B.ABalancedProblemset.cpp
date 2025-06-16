#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int x, n;
        cin >> x >> n;

        int s = x;

        for (int j = 1; j * j <= x; j++) {
            if (x % j) continue;
            if (j >= n) s = min(s, j);
            if (x / j >= n) s = min(s, x / j);
        }

        int ans = x / s;
        cout << ans << endl;
    }
    
    return 0;
}