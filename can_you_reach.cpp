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
   ll n;
   cin>>n;
   vector<ll>v(n); 
   map<ll,ll>mp;
   for(ll i=0;i<n;i++){
       cin>>v[i];
       mp[v[i]]++;
   }
    if(mp.size()==n){
        cout<<n*2<<endl;
        return;
    }
    ll ans=0;
    vector<ll>prefix(n);
    prefix[0]=0;
    for(ll i=1;i<n;i++){
        if(v[i]>v[i-1]){
            prefix[i]=prefix[i-1]+1;
        }
        else{
            prefix[i]=prefix[i-1]-1;
        }
    }
    if(n%2!=0){
        map<ll,ll>mp2;
        for(ll i=0;i<n;i++){
            mp[v[i]]--;
            if (mp[v[i]]==0){
                mp.erase(v[i]); 
            }
            if(mp2.size()==mp.size()){
                if(i==n/2){
                    cout<<n*2<<endl;
                    return;
                }
            }   
            mp2[v[i]]++;
            // cout<<mp.size()<<" "<<mp2.size()<<i<<endl;
        }
    }
   ll prevind=0;
   for(ll i=1;i<n;i++){
       if(prefix[i]==0){
           if(((i-prevind+1)*(i-prevind))==2){
                ans+=2;
           }
            else ans+=((i-prevind+1)*(i-prevind))/2;
           prevind=i;
        //   cout<<ans<<" ";
       }
   }
   if((n-1-prevind+1)*(n-1-prevind)==2){
                ans+=2;
   }
    else ans+=((n-1-prevind+1)*(n-1-prevind))/2;
//   cout<<(n-1-prevind+1)*(n-1-prevind)<<" ";
//   ans+=((n-1-prevind+1)*(n-1-prevind))/2;

   ll ans2 =0;
   for(ll i=0;i<n;i++){
       set<ll>s;
       ll count=1;
       s.insert(v[i]);
        while(s.size()==count){
            s.insert(v[i]);
            count++;
        }
        ans2+=((count)*(count-1))/2;
   }
   cout<<max(ans,max(ans2,n/2+n-1))<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
