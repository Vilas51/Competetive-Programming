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
struct Friend {
    int a; 
    int p;
    int i;  
};

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        v[i].first = a;
        v[i].second = b;
    }
    // sort(v.begin(), v.end());
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second > t)
        {
            cout << ++t << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
    cout << endl;
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
