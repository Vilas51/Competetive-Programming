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
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int j = n - 1;
    set<int> s;
    while (k--)
    {
        if (v[j] > n)
        {
            cout << "NO" << endl;
            return;
        }
        if (s.find(j) != s.end())
        {
            cout << "YES" << endl;
            return;
        }
        s.insert(j);
        j -= v[j];
        j = (j + n) % n;
    }
    cout << "YES" << endl;
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
