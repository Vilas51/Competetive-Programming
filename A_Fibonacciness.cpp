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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int maxi=1;
    for(int i=-1000;i<=1000;i++){
        int x=i;
        int ans=0;
        if(a+b==x)ans++;
        if(b+x==c)ans++;
        if(c+x==d)ans++;
        maxi=max(ans,maxi);
    }
    cout<<maxi<<endl;
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
