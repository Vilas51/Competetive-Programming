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
   int toyo=n;
   n*=4;
   int ca=0,cb=0,cc=0,cd=0,cq=0;
   string s;
   cin>>s;
   for(int i=0;i<n;i++){
    if(s[i]=='A')ca++;
    else if(s[i]=='B')cb++;
    else if(s[i]=='C')cc++;
    else if(s[i]=='D')cd++;
    else cq++;
   }
   ll ans=0;
    ans+=min(toyo,ca); 
    ans+=min(toyo,cb);
    ans+=min(toyo,cc);
    ans+=min(toyo,cd);
    // cout<<ans<<" ";
    // if(ca>0&&cq>0&&ca<toyo){
    //     if(cq-toyo-ca>0){
    //         ans+=(toyo-ca);
    //         cq-=(toyo-ca);
    //     }
    //     else{
    //         ans+=(toyo-cq);
    //         cq=0;
    //     }
    // }
    // if(cb>0&&cq>0&&cb<toyo){
    //     if(cq-toyo-cb>0){
    //         ans+=(toyo-cb);
    //         cq-=(toyo-cb);
    //     }
    //     else{
    //         ans+=(toyo-cq);
    //         cq=0;
    //     }
    // }
    // if(cc>0&&cq>0&&cc<toyo){
    //     if(cq-toyo-cc>0){
    //         ans+=(toyo-cc);
    //         cq-=(toyo-cc);
    //     }
    //     else{
    //         ans+=(toyo-cq);
    //         cq=0;
    //     }
    // }
    // if(cd>0&&cq>0&&cd<toyo){
    //     if(cq-toyo-cd>0){
    //         ans+=(toyo-cd);
    //         cq-=(toyo-cd);
    //     }
    //     else{
    //         ans+=(toyo-cq);
    //         cq=0;
    //     }
    // }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
