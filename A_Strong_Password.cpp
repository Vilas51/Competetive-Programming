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
   string s;
   cin>>s;
   int n=s.size();
   string ans="";
   ans.pb(s[0]);
   if(n==1){
    char ch='a';
    while(ch==s[0]){
        ch++;
    }
    ans.pb(ch);
    cout<<ans<<endl;
    return ;
   }
   bool f=0;
   for(int i=1;i<n;i++){
    if(s[i]==s[i-1]&&f==0){
        char ch=s[i];
            if(ch=='z'){
                ch='a';
            }
            else ch++;
        ans.pb(ch);
        ans.pb(s[i]);
        f=1;
    }
    else{
        ans.pb(s[i]);
    }
   }
   if(f==0){
    string na="";
    char t=s[0];
    if(t=='z'){
        t='a';
    }
    else{
        t++;
    }
    na.pb(t);
    for(int i=0;i<n;i++){
        na.pb(s[i]);
    }
    cout<<na<<endl;
    return;
   }
   else cout<<ans<<endl;
   return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
