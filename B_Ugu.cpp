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
    ll n; cin>>n;
   string s;
   cin>>s;
   ll count=0;
   ll c1=0,c0=0;
   bool f=0;
   ll ope=0;
    bool f2=0;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    vector<int>suff(n+1,0);
    s[n]=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0')suff[i]=suff[i+1]+1;
        else suff[i]=suff[i+1];
    }
   for(int i=0;i<n;i++){
        if(!f&&s[i]=='1'){
            if(i<n&&suff[i]>0){
                f=1;
            }
            count=1;
        }
        if(f&&s[i]=='0'&&count%2==0||f&&s[i]=='1'&&count%2!=0){
            ope++;
            count++;
        }
    }
   cout<<max(0LL,ope-1)<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
