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
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());
    int l=0,h=n-1;
    vector<int>p1;
    vector<int>p2;
    bool f=0;
    int f1=0;
    int f2=0;
    while(l<h){
        if(!f){
            f1+=v[l].first;
            f2+=v[h].first;
            p1.pb(v[l].second);
            p2.pb(v[h].second);
            l++;
            h--;
            f=1;
        }
        else{
            f2+=v[l].first;
            f1+=v[h].first;
            p2.pb(v[l].second);
            p1.pb(v[h].second);
            f=0;
            l++;
            h--;
        }
    }
    if(n&1){
        p1.pb(v[l].second);
        f1+=v[l].first;
    }
    cout<<(n+1)/2<<endl;
    for(int i=0;i<p1.size();i++){
        cout<<p1[i]<<" ";
    }cout<<endl;
    cout<<n/2<<endl;
    for(int i=0;i<p2.size();i++){
        cout<<p2[i]<<" ";
    }cout<<endl;
    // cout<<abs(f1-f2)<<endl;
    return 0;
}
