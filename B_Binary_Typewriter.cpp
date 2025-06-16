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
   int n;cin>>n;
   string s;cin>>s;
   int ans=0,flag=0;
   if(count(s.begin(),s.end(),'0')==0){
    cout<<n+1<<endl;
    return;
   }
   if(count(s.begin(),s.end(),'1')==0){
    cout<<n<<endl;
    return;
   }
   int countsub=0;
   int j=0;
   while(j<n){
    bool f1=0,f2=0,f3=0;
    while(s[j]=='0'){
        j++;
        f1=1;
    }
    while(s[j]=='1'){
        j++;
        f2=1;
    }
    while(s[j]=='0'){
        j++;
        f3=1;
    }
    countsub+=(f1+f2+f3);
    j++;
   }
   if(countsub==2){
    cout<<n+1<<endl;
    return;
   }
   for(int i=0;i<n;i++){
    if(s[i]=='0'){
        if(flag==0){
            ans++;
        }else{
            ans+=2;
            flag=0;
        }
    }else{
        if(flag==1){
            ans++;
        }else{
            ans+=2;
            flag=1;
        }
    }
   }
   if(n>3)ans-=2;
   else ans-=1;
   cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
