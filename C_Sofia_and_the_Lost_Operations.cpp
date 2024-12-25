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
   vector<int>a(n),b(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    cin>>b[i];
   }
    int m;
    cin>>m;
    vector<int>d(m);
    map<int,int>mp;
    for(int i=0;i<m;i++){
        cin>>d[i];
        mp[d[i]]++;
    }
    // int j=0;
    bool f=0;
    for(int i=0;i<n;i++){
        if(b[i]==d[m-1])f=1;
        if(a[i]!=b[i]){
            if(mp[b[i]]>0){
                mp[b[i]]--;
                if(mp[b[i]]==0){
                    mp.erase(mp[b[i]]);
                }
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    if(mp.size()>0&&!f){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
