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
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 1; i <= n; i++) {
        s.insert(i);
    }
    
    bool flag = true;
    ll sum = 0;
    vector<ll> ans;
    
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (auto it = s.begin(); it != s.end(); ) {
            ll currx = sqrt(sum + *it);
            if (currx * currx != (sum + *it)) {  
                sum += *it;
                ans.push_back(*it);
                it = s.erase(it);
                found = true;
                break;
            } else {
                ++it;
            }
        }
        if (!found) {  
            flag = false;
            break;
        }
    }

    if (!flag) {
        cout << -1 << endl;
        return ;
    }

    for (ll i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return ;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    // ll n;
    // cin >> n;
    // set<ll> s;
    // for (ll i = 1; i <= n; i++) {
    //     s.insert(i);
    // }
    
    // bool flag = true;
    // ll sum = 0;
    // vector<ll> ans;
    
    // for (int i = 0; i < n; i++) {
    //     bool found = false;
    //     for (auto it = s.begin(); it != s.end(); ) {
    //         ll currx = sqrt(sum + *it);
    //         if (currx * currx != (sum + *it)) {  
    //             sum += *it;
    //             ans.push_back(*it);
    //             it = s.erase(it);
    //             found = true;
    //             break;
    //         } else {
    //             ++it;
    //         }
    //     }
    //     if (!found) {  
    //         flag = false;
    //         break;
    //     }
    // }

    // if (!flag) {
    //     cout << -1 << endl;
    //     return 0;
    // }

    // for (ll i : ans) {
    //     cout << i << " ";
    // }
    // cout << endl;

    return 0;
}
