// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define ld long double
// #define upd upper_bound
// #define lpd lower_bound
// #define pb push_back
// #define endl "\n"
// #define f(i,a,b) for(ll i = a;i<=b;i++)
// #define ff(i,a,b) for(ll i=a ;i>=b;i--)
// #define mod 1000000007
// int solve(int i,int ans,vector<pair<int,int>>&v,int n,int w){
//     if(w<=0){
//         return INT_MIN;
//     }
//     if(i==n){
//         return 0;
//     }
//     return max(solve(i+1,ans,v,n,w),solve(i+1,ans+v[i].second,v,n,w-v[i].first));
// }
// int main(){
//     // ios::sync_with_stdio(0); cin.tie(0);
//     int n; int w;
//     cin>>n>>w;
//     vector<pair<int,int>>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i].first>>v[i].second;
//     } 
//     int ans=solve(0,INT_MIN,v,n,w);
//     cout<<ans<<endl;
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

void solve(vector<pair<int, int>>v, int n, int limit, int currValue, int index, int& ans)
{
    ans=max(ans, currValue);

    if(index>=n)
    {
        return;
    }
    for(int i=index; i<n; i++)
    {
        if(limit - v[i].first <0)
        {
            break;
        }
        solve(v, n, limit-v[i].first, currValue+v[i].second, i+1, ans);
    }
    solve(v, n, limit, currValue, index+1, ans);

}
int main()
{
    int n;
    int w;
    cin >> n >> w;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int ans =0;
    solve(v, n, w,0, 0, ans);
    cout << ans << endl;
}