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
   cin>>n;
   vector<int>v(n);
   map<int,int>mp;
   bool flag=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
    if(mp[v[i]]>1)flag=1;
   }
   vector<pair<int, int>> vec(mp.begin(), mp.end());
   sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second %2 !=0&&b.second %2 ==0; 
    });
   ll ans=0;
   bool f=0,f2=0;
   ll ans2=0;
   for(auto x:mp){
    // if(!f){
        if(x.second==1){
            if(!f){
                ans+=2;
                f=1;
            }else{
                f=0;
            }
            continue;
        }
        // if(x.second%2==0){
            ans+=1;
        // }
        // else{
        //     if(!f2){
        //         ans+=2;
        //         f2=1;
        //     }else{
        //         f2=0;
        //     }
        // }
        //     f=1;
    // }else{
    //     if(x.second%2==0)ans2+=1;
    //     else ans2+=2;
    //     f=0;
    // }
   }
//    if(flag){

//    }else{
    cout<<max(ans,ans2)<<endl;
//    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
