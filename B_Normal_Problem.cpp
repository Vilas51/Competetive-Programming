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
    string a;
    string b = "";
    cin >> a;
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] == 'p') b += 'q';
        else if (a[i] == 'q') b += 'p';
        else b += 'w'; 
    }
    cout << b << endl;
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
