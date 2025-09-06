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
   
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<int>ans(n,1);
    for(int i=0;i<n;i++){
        ans[i]=mp.size();
        mp[v[i]]--;
        if(mp[v[i]]==0)mp.erase(v[i]);
    }
    while(m--){
        int x;cin>>x;x--;
        cout<<ans[x]<<endl;
    }
}
