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
   int n;
    cin >> n;
    string s;
    cin >> s;
    ll copen = 0; 
    string t = ""; 
    vector<int>ahemage;
    ll ans=0;
    for(ll i = 0; i < n; i++) {
        if(s[i]=='_'){
            if(ahemage.size()==0){
                ahemage.pb(i);
            }
            else{
                ans+=i-ahemage.back();
                ahemage.pop_back();
            }
            continue;
        }
        if(s[i]=='('){
            ahemage.pb(i);
        }
        else{
            ans+=i-ahemage.back();
            ahemage.pop_back();
        }
    }
    cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
