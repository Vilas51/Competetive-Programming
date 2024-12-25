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
ll findPeakElement(vector<ll>& nums) {
        ll n = nums.size();
        ll start = 0;
        ll end = n-1;

        while(start < end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] < nums[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return start;
}
void solve(){
//    ll n; cin>>n;
//    vector<ll>v(n);
//    for(ll i=0;i<n;i++){
//     cin>>v[i];
//    }
//    if(n==1){
//     if(v[0]==0){
//         cout<<1<<endl;
//         return;
//     }
//     else{
//         cout<<0<<endl;
//         return;
//     }
//    }
//   unordered_map<int,int>mp;
//   ll currsum=0;
//   ll ans=0;
//     for(ll i=0;i<n;i++){
//         currsum+=v[i];
//         if(currsum-v[i]==v[i])ans++;
//         if(mp[currsum-v[i]])ans++;
//         else mp[currsum-v[i]]++;
//     }
//     cout<<ans<<endl;
ll n; cin>>n;
ll ans=0;
ll maxi =0;
ll sum=0;
   vector<ll>v(n);
   for(ll i=0;i<n;i++){
    cin>>v[i];
    maxi=max(maxi,v[i]);
    sum+=v[i];
    if(sum==maxi*2){
        ans++;
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
