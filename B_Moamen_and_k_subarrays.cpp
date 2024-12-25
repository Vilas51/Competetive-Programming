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
    int n, k; cin >> n >> k;
    // vector<pair<int, int>> v(n); 
    vector<pair<int, int>> s(n);
    for (int i = 0; i < n; i++) {
        // int a;  cin >> a;
        // v[i] = {a, i}; 
        // s[i] = {a, i};
        cin>>s[i].first;
        s[i].second=i;
    }
    sort(s.begin(), s.end());
    // unordered_set<int> us;
    int ans=1;
    for (int i=1;i<n;i++) {
        // auto x = find_if(v.begin(), v.end(), [&](const pair<int, int>& p) {
        //     return p.first == s[i].first;
        // });
        // us.insert(x->second - i);
        if(s[i-1].second+1 != s[i].second){
            ans++;
        }
    }
    cout<<(ans<=k?"Yes":"No")<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
