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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    if (n == 1 && m == 1) {
        cout << mat[0][0] << endl;
        return;
    }

    auto max_of_three = [](int a, int b, int c) {
        return max({a, b, c});
    };

    auto max_of_four = [](int a, int b, int c, int d) {
        return max({a, b, c, d});
    };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                if (mat[i][j] > mat[i][j + 1] && mat[i][j] > mat[i + 1][j]) {
                    mat[i][j] = max(mat[i][j + 1], mat[i + 1][j]);
                }
            } else if (i == n - 1 && j == m - 1) {
                if (mat[i][j] > mat[i - 1][j] && mat[i][j] > mat[i][j - 1]) {
                    mat[i][j] = max(mat[i - 1][j], mat[i][j - 1]);
                }
            } else if (i == 0 && j == m - 1) {
                if (mat[i][j] > mat[i + 1][j] && mat[i][j] > mat[i][j - 1]) {
                    mat[i][j] = max(mat[i + 1][j], mat[i][j - 1]);
                }
            } else if (i == n - 1 && j == 0) {
                if (mat[i][j] > mat[i - 1][j] && mat[i][j] > mat[i][j + 1]) {
                    mat[i][j] = max(mat[i - 1][j], mat[i][j + 1]);
                }
            } else if (i == 0) {
                if (mat[i][j] > mat[i][j + 1] && mat[i][j] > mat[i][j - 1] && mat[i][j] > mat[i + 1][j]) {
                    mat[i][j] = max_of_three(mat[i][j + 1], mat[i][j - 1], mat[i + 1][j]);
                }
            } else if (j == 0) {
                if (mat[i][j] > mat[i - 1][j] && mat[i][j] > mat[i][j + 1] && mat[i][j] > mat[i + 1][j]) {
                    mat[i][j] = max_of_three(mat[i - 1][j], mat[i][j + 1], mat[i + 1][j]);
                }
            } else if (i == n - 1) {
                if (mat[i][j] > mat[i][j + 1] && mat[i][j] > mat[i][j - 1] && mat[i][j] > mat[i - 1][j]) {
                    mat[i][j] = max_of_three(mat[i][j + 1], mat[i][j - 1], mat[i - 1][j]);
                }
            } else if (j == m - 1) {
                if (mat[i][j] > mat[i - 1][j] && mat[i][j] > mat[i + 1][j] && mat[i][j] > mat[i][j - 1]) {
                    mat[i][j] = max_of_three(mat[i - 1][j], mat[i + 1][j], mat[i][j - 1]);
                }
            } else {
                if (mat[i][j] > mat[i - 1][j] && mat[i][j] > mat[i + 1][j] && mat[i][j] > mat[i][j - 1] && mat[i][j] > mat[i][j + 1]) {
                    mat[i][j] = max_of_four(mat[i - 1][j], mat[i + 1][j], mat[i][j - 1], mat[i][j + 1]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
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