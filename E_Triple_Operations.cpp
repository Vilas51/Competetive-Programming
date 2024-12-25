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

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    vector<int>calc(2000000+1,0);
    vector<int>prefix(2000000+1,0);
    for(int b=0;b<2000000;b++){
        int k=b;
        int co=0;
        while(k>0){
            k/=3;
            co++;
        }
        calc[b]=co;
    }
    // prefix[0]=0;
    for(int i=0;i<2000000;i++){
        prefix[i+1]=prefix[i]+calc[i];
    }
    int t; cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        ll c=prefix[y+1]-prefix[x];
        c+=calc[x];
        cout<<c<<endl;
    }
}
