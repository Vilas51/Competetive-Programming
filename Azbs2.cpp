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

bool check(int res, vector<int> &vec, int k)
{
    int curr = vec[0], n = vec.size(), count = 1;
    for (int i = 1; i < n; i++)
    {
        if (curr + vec[i] > res)
        {
            curr = vec[i];
            count++;
        }
        else
        {
            curr += vec[i];
        }
    }
    return (count >= k);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int lo = 1, hi = accumulate(v.begin(),v.end(),0);
    int ans = 0;
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (check(mid, v, k))
        {
            cout << ans << " ";
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << ans << endl;
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
