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
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sumi=0;
    ll maxind=0;
    ll maxi=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sumi+=v[i];
        if(v[i]>=maxi){
            maxind=i;
            maxi=v[i];
        }
    }
    // vector<ll>temp={v.begin(),v.end()};
    // sort(temp.begin(),temp.end());
    // ll avg=sumi/n;
    // int count=0;
    // for(int i=0;i<n;i++){
    //     if(avg/2>v[i])count++;
    // }
    if(n==1){
        cout<<"-1"<<endl;
        return;
    }
    ll lo=0,hi=1e12;
    ll ans=-1;
    while(lo<=hi){
        ll m=(lo+hi)/2;
        ll val=sumi+m;
        v[maxind]+=m;
        ll count2=0;
        for(ll i=0;i<n;i++){
            if((v[i]*2ll*n)<val){
                count2++;
            }
        }
        v[maxind]-=m;
        if(count2>n/2){
            ans=m;
            hi=m-1;
        }
        else{
            lo=m+1;
        }
    }
    // if(f){
        cout<<ans<<endl;
    // }
    // else{
    //     cout<<"-1"<<endl;
    // }
    return;
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
