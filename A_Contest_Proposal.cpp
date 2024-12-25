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
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    // int ans = 0;
    // for (int i = 0; i < n; i++) {
    //     if(a[i]>b[i]){
    //         auto it = lower_bound(b.begin(), b.end(), a[i]); // Using lower_bound to find the first element not less than a[i]
    //         if (it != b.end()) { // If such an element exists
    //             ans += it - b.begin()-i ; // Add its position (+1 because index starts from 0)
    //         } else { // If all elements in b are less than a[i]
    //             ans += n-i; // Add the total number of elements in b
    //         }
    //         cout<<ans<<" ";

    //     }
    // }
    // cout<<endl;
    // cout << ans << endl;
    // int i = 0, j = 0;
    // int ans = 0;
    // while (i < n && j < n)
    // {
    //     if (a[i] > b[j])
    //     {    
    //         int count=0;
    //         while (j < n && a[i] > b[j])
    //         {
    //             j++;
    //             count++;
    //         // cout<<i<<" "<<j<<endl;
    //         }
    //         ans += count;
    //         // cout<<count<<" ";
    //         i=j;
    //     }
    //     else{
    //         i++;
    //         j++;
    //     }
    //     //    cout<<ans<<" ";
    // }
    // if (j < n && i > n)
    // {
    //     ans += n - j;
    //     cout<<ans<<endl;
    // }
    // cout<<ans<<endl;
    // // cout << ans << endl;
    int i=0;int j=0;
    int ans=0;
    while(i<n&&j<n){
        if(a[i]>b[j]){
            ans++;
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
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
