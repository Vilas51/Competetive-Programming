#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl "\n"
#define mod 1000000007

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> mat(n, vector<ll>(m));
    map<ll, ll> freq;

    // Input matrix and build initial frequency map
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> mat[i][j];
            freq[mat[i][j]]++;
        }
    }

    vector<pair<ll, ll>> row(n), col(m);

    // Process rows
    for (ll i = 0; i < n; i++) {
        // Temporarily decrease each element in the row
        for (ll j = 0; j < m; j++) {
            freq[mat[i][j]]--;
            mat[i][j]--;
            freq[mat[i][j]]++;
        }

        // Find max frequency and corresponding value
        ll maxFreq = 0, maxVal = 0;
        for (auto it : freq) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                maxVal = it.first;
            }
        }
        row[i] = {maxFreq, maxVal};

        // Restore original values
        for (ll j = 0; j < m; j++) {
            freq[mat[i][j]]--;
            mat[i][j]++;
            freq[mat[i][j]]++;
        }
    }

    // Process columns
    for (ll j = 0; j < m; j++) {
        // Temporarily decrease each element in the column
        for (ll i = 0; i < n; i++) {
            freq[mat[i][j]]--;
            mat[i][j]--;
            freq[mat[i][j]]++;
        }

        // Find max frequency and corresponding value
        ll maxFreq = 0, maxVal = 0;
        for (auto it : freq) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                maxVal = it.first;
            }
        }
        col[j] = {maxFreq, maxVal};

        // Restore original values
        for (ll i = 0; i < n; i++) {
            freq[mat[i][j]]--;
            mat[i][j]++;
            freq[mat[i][j]]++;
        }
    }

    // Find the maximum value considering row and column frequencies
    ll ans = LLONG_MIN;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (row[i].first > col[j].first) {
                ans = max(ans, row[i].second);
            } else if (row[i].first < col[j].first) {
                ans = max(ans, col[j].second);
            } else {
                ans = max(ans, max(row[i].second, col[j].second));
            }
        }
    }

    cout << ans << endl;
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
