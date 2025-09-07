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
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i==0)v[0]=x;
        else v[i]=v[i-1]+x;
    }
    int q;
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        int i=lpd(v.begin(),v.end(),a)-v.begin();
        cout<<i+1<<endl;
    }
}
