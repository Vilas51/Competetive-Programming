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
    ll x, y, k;
    cin >> x >> y >> k;
    while(k>0&&x>1){
        ll rem=y-x%y;
        if(k<rem){
            x+=k;
            k=0;
        }
        else{
            k-=rem;
            x+=rem;
        }
        while(x%y==0){
            x/=y;
        }
    }
    if(k>0){
        k%=(y-1);
        x+=k;
    }
    cout<<x<<endl;
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
