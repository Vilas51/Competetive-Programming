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
    int n;
    cin >> n;
    vector<int> v(n);
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        maxi = max(v[i], maxi);
    }
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        ll pow=log2(v[i])+1;
        cout << i + 1 << " " << (1<<pow)- v[i] << endl;
    }
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
