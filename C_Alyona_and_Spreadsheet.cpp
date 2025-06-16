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
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> can_cross(n, 0); 
    for (int i = 0; i < m; i++) {
        int max_end = 0;
        for (int j = 1; j < n; j++) {
            if (arr[j][i - 1] <= arr[j][i]) {
                max_end = j;
            } else {
                break;
            }
        }
        can_cross[i] = max_end; 
    }

    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        bool is_possible = false;
        for (int row = x; row <= y; row++) {
            if (can_cross[row] >= y) { 
                is_possible = true;
                break;
            }
        }
        if (is_possible) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     set<pair<int, int>> v;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (arr[i][j] <= arr[i][j + 1])
//             {
//                 int st = j;
//                 while (j < n - 1 && arr[i][j] <= arr[i][j + 1])
//                 {
//                     j++;
//                 }
//                 if (j == n - 1 && arr[i][j - 1] <= arr[i][j])
//                 {
//                     v.insert({st, j});
//                 }
//                 else
//                 {
//                     int en = j;
//                     v.insert({st, en - 1});
//                 }
//             }
//         }
//     }
//     int k;
//     cin >> k;
//     for (int i = 0; i < k; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         x--;
//         y--;
//         bool f = 0;
//         for (auto it : v)
//         {
//             if (it.first >= x && it.second <= y)
//             {
//                 f = 1;
//                 break;
//             }
//         }
//         if (f)cout << "Yes" << endl;
//         else cout << "No" << endl;
//     }
// }
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
