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
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }

    ll result = sum;
    int ind = 0;

    for (int i = 1; i <= n - k; i++)
    {
        sum = sum - v[i - 1] + v[i + k - 1];
        if (sum < result)
        {
            result = sum;
            ind = i;
        }
    }

    cout << ind + 1 << endl;
    return 0;
}
