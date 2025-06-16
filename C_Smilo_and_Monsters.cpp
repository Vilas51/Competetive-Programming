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

int solvebydp(int i, vector<int> &v)
{

}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    sort(v.begin(), v.end());
    ll l = 1, h = accumulate(v.begin(), v.end(), 0LL);
    int result = INT_MAX;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += v[i] / mid;
            ans += v[i] % mid;
        }
        if (ans <= result)
        {
            result = min(ans, result);
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
        cout << mid << " ";
    }
    cout << result << endl;
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
