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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int result = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int current_max = INT_MIN;

            for (int k = 0; k < i; k++)
            {
                current_max = max(current_max, v[k]);
            }

            for (int k = j + 1; k < n; k++)
            {
                current_max = max(current_max, v[k]);
            }

            int l = i, h = j;
            while (l < h)
            {
                current_max = max(current_max, v[l] & v[h]);
                l++;
                h--;
            }

            result = min(result, current_max);
        }
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
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int result = a[0];
        for (int i = 1; i < n; ++i) {
            result &= a[i];
        }
        
        cout << result << endl;
    }
}
