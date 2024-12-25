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
    ll n,d; 
    cin >> n >> d;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll ans = 0; 
    ll k = n;
    for(int i = n - 1; i >= 0; i--){
        ll x = (d / v[i]) + 1; 
        if(k - x >= 0){
            ans++;
            k -= x;
        }else{
            break;
        }
    }
    cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
     ll n,d; 
    cin >> n >> d;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll ans = 0; 
    ll k = n;
    for(int i = n - 1; i >= 0; i--){
        ll x = (d / v[i]) + 1; 
        if(k - x >= 0){
            ans++;
            k -= x;
        }else{
            break;
        }
    }
    cout << ans << endl;
}
