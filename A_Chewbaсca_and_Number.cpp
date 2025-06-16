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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    // solve();
    // }
    ll n;
    cin >> n;
    ll reverse = 0;
    ll k = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit > 4)
        {
            digit = 9 - digit;
        }
        reverse += digit * k * 10;
        k++;
        n /= 10;
    }
    cout << reverse << endl;
    return 0;
}
