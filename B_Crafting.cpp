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
void solve(){
    int n;cin>>n;int x[n],y[n],z[n]{};for(int& i:x)cin>>i;long long u=0,v=0;for(int i=0;i<n;i++){cin>>y[i];z[i]=y[i]-x[i];if(z[i]>0)u+=z[i];else v+=z[i];}bool w=true;for(int i=0;i<n;i++){if(z[i]>0){if(x[i]-u+2*z[i]<y[i])w&=false;else if(x[i]>=y[i])w&=true;}else{if(x[i]-u<y[i])w&=false;else if(x[i]>=y[i])w&=true;}}cout<<(w?"YES":"NO")<<'\n';
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
