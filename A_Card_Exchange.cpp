#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i,a,b) for(ll i = a;i<=b;i++)
#define ff(i,a,b) for(ll i=a ;i>=b;i--)
#define mod 1000000007
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
if(n==1 && k>1){
    cout<<1<<endl;
    return;
}
    // Copy elements of map to a vector of pairs
    vector<pair<int, int>> sortedMap(mp.begin(), mp.end());

    // Sort the vector based on the second element of pairs
    sort(sortedMap.rbegin(), sortedMap.rend(),
         [](const pair<int, int>& a, const pair<int, int>& b) {
             return a.second < b.second;
         });

    bool f = false;
    int ans=n;
    for (auto x : sortedMap) {
        if(x.second==n){
            cout<<k-1<<endl;
            return;
        }
        if (!f) {
            if (x.second >= k) {
                int t =( x.second)/ k;
                int z=x.second % k;
                ans-=t+(z)+t*(k-1);
                f = true;
            }
        } else {
            if (x.second +(k-1)>= k) {
                int t = (x.second+k-1) / k ;
                int z=(x.second+k-1)% k;
                ans-=t+z+t*(k-1);
            }
        }
    }
    if(ans<0)cout<<min(abs(ans),1)<<endl;
    else cout << ans<< endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
