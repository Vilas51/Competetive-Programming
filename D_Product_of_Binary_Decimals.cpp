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
    // vector<int> v={1,10,11,100,101,110,111,121,1000,1001,1010,1011,1100,1101,1110,1111,1210,1221,1331,10000,10001,10010,10011,10100,10101,10110,10111,10201,11000,11001,11010,11011,11100,11101,11110,11111,11121,11211,12100,12111,12210,12221,12321,13310,13431,14641,100000};
    // ll n; cin>>n;
    // bool f=0;
    // for(auto c:v){
    //     if(n==c){
    //         f=1;
    //         break;
    //     }
    // }
    // if(f){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }
int reverseInteger(int x) {
    int reversed = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;
        // Check for overflow/underflow
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) return 0; // INT_MAX = 2147483647
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) return 0; // INT_MIN = -2147483648

        reversed = reversed * 10 + digit;
    }
    return reversed;
}
bool contains_only_01_digits(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 1) {
            return false;
        }
        n /= 10;
    }
    return true;
}
void solve(){
    ll n; cin>>n;
    vector<ll>v;
    v.pb(10); v.pb(11);
    ll i=0;
    while(true){
        if(i>=v.size())break;
        ll x=v[i]*10;
        ll y=x+1;
        if(x<=n)v.pb(x);
        if(y<=n)v.pb(y);
        i++;
    }
    sort(v.rbegin(),v.rend());
    while(n>1){
        bool flag=1;
        for(int i=0;i<v.size();i++){
            if(n%v[i]==0){
                n/=v[i];
                flag=0;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(n==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
