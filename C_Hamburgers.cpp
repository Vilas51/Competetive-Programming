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
int main(){ ios::sync_with_stdio(0); cin.tie(0);
    string s; cin>>s;
    ll reqb=0,reqs=0,reqc=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='B')reqb++;
        else if(s[i]=='S')reqs++;
        else reqc++;
    }
    ll bn,sn,cn; cin>>bn>>sn>>cn;
    ll pb,ps,pc; cin>>pb>>ps>>pc;
    ll r; cin>>r;
    ll l=0,h=3*r;
    ll ans=0;
    while(h-l>1){
        ll mid=(l+h)/2;
        ll got=max(0LL,reqb*mid-bn)*pb+max(0LL,reqs*mid-sn)*ps+max(0LL,reqc*mid-cn)*pc;
        if(got>r){
            h=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<l<<endl;
    return 0;
}
