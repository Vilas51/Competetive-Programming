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
   ll n,x; cin>>n>>x;
//    vector<ll>v(n);
//    for(int i=0;i<n;i++){
//     cin>>v[i];
//    }
//    ll left=x-v[0],right=x+v[0];
//    ll c=0;
//    for(int i=1;i<n;i++){
//     if (v[i] + x > right && v[i] - x < left) {
//             left = min(left, x - v[i]);
//             right = max(right, x + v[i]);
//             c++;
//         }
//    }
//    cout<<c<<endl;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
     cin>>a[i];
    }
    int ans = 0;
    int prev_left =  a[0] - x;
    int prev_right = x + a[0];
    for (int i = 1; i < n; i++) {
        int curr_left = a[i] - x;
        int curr_right = x + a[i];
        if (curr_left > prev_right || curr_right < prev_left) {
            ans++;
            prev_left = curr_left;
            prev_right = curr_right;
        }
        else {//shrink
            prev_right = min(prev_right, curr_right);
            prev_left = max(prev_left, curr_left);
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
