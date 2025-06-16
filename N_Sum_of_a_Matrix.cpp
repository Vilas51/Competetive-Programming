#include <iostream>
#include <vector>
using namespace std;

void solve(vector<vector<int>>& ans, const vector<vector<int>>& a, const vector<vector<int>>& b, int n, int m, int currRow, int currCol) {
    if (currRow >= n) return;
    if (currCol >= m) {
        solve(ans, a, b, n, m, currRow + 1, 0);
        return;
    }
    ans[currRow][currCol] = a[currRow][currCol] + b[currRow][currCol];
    solve(ans, a, b, n, m, currRow, currCol + 1);
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    vector<vector<int>> ans(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    solve(ans, a, b, n, m, 0, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
