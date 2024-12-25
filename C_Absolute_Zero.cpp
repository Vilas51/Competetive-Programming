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
int n;
   cin>>n;
   vector<int>v(n);
   bool even=0,odd=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]%2==0)even=1;
    else odd=1;
   }
   if(even&&odd){
    cout<<-1<<endl;
    return;
   }
   vector<int>ans;
   for(int i=29;i>=0;i--){
    ans.pb(1<<i);
   }
   if(even)ans.pb(1);
   cout<<ans.size()<<endl;
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
    cout<<endl;
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
