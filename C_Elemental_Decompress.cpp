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
   vector<bool>perma(n+1,false),permb(n+1,false);
   vector<ll>v(n);
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
   vector<ll>ansa(n,0),ansb(n,0);
   for(ll i=0;i<n;i++){
    if(v[i]>n){
        cout<<"NO"<<endl;
        return;
    }
    if(perma[v[i]]==false){
        ansa[i]=v[i];
        perma[v[i]]=1;
        continue;
    }
    if(permb[v[i]]==false){
        ansb[i]=v[i];
        permb[v[i]]=1;
        continue;
    }   
    cout<<"NO"<<endl;
    return;
    }

    vector<ll>curr,curr2;
    for(int i=1;i<=n;i++){
        if(!perma[i]){
            curr.pb(i);
        }
        if(!permb[i]){
            curr2.pb(i);
        }
    }
    sort(curr.begin(),curr.end());
    sort(curr2.begin(),curr2.end());
    for(ll i=0;i<n;i++){
        if(ansa[i]==0){
            ll num=v[i];
            auto it=curr.begin();
            ll tom=*it;
            if(tom>num){
                cout<<"NO"<<endl;
                return;
            }
            ansa[i]=*it;
            perma[*it]=1;
            curr.erase(it);
        }
        if(ansb[i]==0){
            ll num=v[i];
            auto it=curr2.begin();
            ll tom=*it;
            if(tom>num){
                cout<<"NO"<<endl;
                return;
            }
            ansb[i]=*it;
            permb[*it]=1;
            curr2.erase(it);
        }
    }
    cout<<"YES"<<endl;
    for(ll i=0;i<n;i++){
        cout<<ansa[i]<<" ";
    }cout<<endl;
    for(ll i=0;i<n;i++){
        cout<<ansb[i]<<" ";
    }cout<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
