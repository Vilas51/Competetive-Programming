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
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(v.begin(),v.end());
    int maxi=INT_MIN;
    bool f=0;
    for(int i=0;i<n;i++){
        if(maxi==INT_MIN){
            maxi=v[i].second;
        }
        else if(maxi>v[i].second){
            f=1;break;
        }
        maxi=max(maxi,v[i].second);
    }
    if(f)cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
}
