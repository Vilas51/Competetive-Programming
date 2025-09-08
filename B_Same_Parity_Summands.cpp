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
    if (n < k)
    {
        cout << "NO" << endl;
        return;
    }
    if (n % 2 != 0)
    {
        if (k == 2)
        {
            cout << "NO" << endl;
            return;
        }
        if (k % 2 == 0)
        {
            if(n<k*2){
                cout<<"NO"<<endl;
                return;
            }
            vector<int> v;
            bool notpos = false;
            while (n > 0)
            {
                if (k == 1)
                {
                    v.pb(n);
                    if (n % 2 != 0)
                    {
                        notpos = true;
                    }
                    n = 0;
                }
                else
                {
                    v.pb(2);
                    n -= 2;
                }
                k--;
            }
            if (notpos)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                cout << "YES" << endl;
                for (int vo : v)
                {
                    cout << vo << " ";
                }
                cout << endl;
            }
        }
        else
        {
            vector<int> v;
            bool notpos = false;
            while (n > 0)
            {
                if (k == 1)
                {
                    v.pb(n);
                    if (n % 2 == 0)
                    {
                        notpos = true;
                    }
                    n = 0;
                }
                else
                {
                    v.pb(1);
                    n -= 1;
                }
                k--;
            }
            if (notpos)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                cout << "YES" << endl;
                for (int vo : v)
                {
                    cout << vo << " ";
                }
                cout << endl;
            }
        }
    }
    else
    {
        if (k % 2 != 0)
        {
            if(n<2*k){
                cout << "NO" << endl;
                return;
            }
            vector<int> v;
            bool notpos = false;
            while (n > 0)
            {
                if (k == 1)
                {
                    v.pb(n);
                    if (n % 2 != 0)
                    {
                        notpos = true;
                    }
                    n = 0;
                }
                else
                {
                    v.pb(2);
                    n -= 2;
                }
                k--;
            }
            if (notpos)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                cout << "YES" << endl;
                for (int vo : v)
                {
                    cout << vo << " ";
                }
                cout << endl;
            }
        }
        else
        {
            vector<int> v;
            bool notpos = false;
            while (n > 0)
            {
                if (k == 1)
                {
                    v.pb(n);
                    if (n % 2 == 0)
                    {
                        notpos = true;
                    }
                    n -= n;
                }
                else
                {
                    v.pb(1);
                    n -= 1;
                }
                k--;
            }
            if (notpos)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                cout << "YES" << endl;
                for (int vo : v)
                {
                    cout << vo << " ";
                }
                cout << endl;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
