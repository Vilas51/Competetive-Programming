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
// void bs(int lo,int hi,vector<int>&v,int k,s<int>&ans){
//     if(k<v[lo]&&k<v[hi]||k>v[lo]&&k>v[hi])return;

//     if(k==v[lo]||k==v[hi]){
//         for(int i=lo;i<=hi;i++){
//             ans.pb(v[i]);
//         }
//         return;
//     }

//     if(lo<=hi){
//         int mid=(lo+hi)/2;
//         if(v[lo]<=v[mid]&&v[mid]<=k){
//             bs(mid+1,hi,v,k,ans);
//         }
//         else if(v[lo]>v[mid]&&v[mid]<=k){

//         }
//         else if(v[lo]<=v[mid]&&v[mid]>=k){

//         }
//         else if(v[lo]>v[mid]&&v[mid]>=k){

//         }
//     }
// }
//    for(int i=0;i<q;i++){
//     int k; cin>>k;
//     set<int>ans;
//     bs(0,n-1,v,k,ans);
//     for(int x: ans){
//         cout<<x<<" ";
//     }cout<<endl;
//    }
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<pair<int, int>> search(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        search[i].first = v[i];
        search[i].second = i + 1;
    }
    sort(search.begin(), search.end());
    // for(int i=0;i<search.size();i++){
    //     cout<<search[i].first<<"->"<<search[i].second<<" ";
    // }cout<<endl;
    for (int i = 0; i < q; i++)
    {
        int k;
        cin >> k;
        int lo = 0, hi = n - 1;
        int lower,higher;
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (search[mid].first < k)
            {
                lo = mid + 1;
            }
            else
            {
                if (search[mid].first == k) lower = mid;
                hi = mid - 1;
            }
        }
        lo = 0, hi = n - 1;
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (search[mid].first > k)
            {
                hi = mid - 1;
            }
            else
            {
                if (search[mid].first == k) higher = mid;
                lo = mid + 1;
            }
        }
        // cout << k << " ";
        if(lo==-1)continue;
        for (int i = lower; i <= higher; i++)
        {
            cout << search[i].second << " ";
        }
        cout << endl;
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
