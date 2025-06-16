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
    int x;
    cin >> x;
    int total_sum = 2025;
    int count_x = 0;
    for (int i = 1; i <= 9; i++)
    {
        if (x % i == 0)
        {
            int j = x / i;
            if (j >= 1 && j <= 9)
            {
                count_x++;
            }
        }
    }
    int result = total_sum - (count_x * x);
    cout << result << endl;
    return 0;
}
