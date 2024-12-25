// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ld long double
// #define upd upper_bound
// #define lpd lower_bound
// #define pb push_back
// #define endl "\n"
// #define f(i, a, b) for (ll i = a; i <= b; i++)
// #define ff(i, a, b) for (ll i = a; i >= b; i--)
// #define mod 1000000007
// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     vector<ll> freq(n, 0);
//     map<ll, ll> mp;
//     for (ll i = 0; i < n; i++)
//     {
//         if (mp.find(v[i]) == mp.end())
//         {
//             freq[i] = 1;
//         }
//         else
//         {
//             freq[i] = mp[v[i]] + 1;
//         }
//         mp[v[i]]++;
//     }
//     ll m;
//     cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         string s;
//         cin >> s;
//         vector<int> count(s.size(), 0);
//         bool f = 0;
//         unordered_map<ll, ll> mp2;
//         for (int j = 0; j < s.size(); j++)
//         {
//             count[s[j]-'a']++;
//             if (mp2.find(s[j]-'a') == mp2.end())
//             {
//                 count[j] = 1;
//             }
//             else
//             {
//                 count[j] = mp2[s[j]-'a'] + 1;
//             }
//             mp2[s[j]-'a']++;
//             if (freq[j] != count[j])
//             {
//                 f = 1;
//                 break;
//             }
//         }
//         if (f || s.size() != n)
//             cout << "NO" << endl;
//         else
//             cout << "YES" << endl;
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }
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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Calculate frequencies of elements in v
    vector<ll> freq(n, 0);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        freq[i] = ++mp[v[i]];
    }

    ll m;
    cin >> m;
    while (m--)
    {
        string s;
        cin >> s;

        // Check if sizes of v and s are the same
        if (s.size() != n)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> count(26, 0); // Create count array for 'a'-'z'
        bool mismatch = false;

        unordered_map<ll, ll> mp2;
        for (int j = 0; j < s.size(); j++)
        {
            // Update character count
            count[s[j] - 'a']++;
            ll char_freq = ++mp2[s[j] - 'a'];

            // Compare with freq array
            if (freq[j] != char_freq)
            {
                mismatch = true;
                break;
            }
        }

        if (mismatch)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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
