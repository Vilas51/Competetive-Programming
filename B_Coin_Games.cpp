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
   string s;
   cin>>s;
   //Approach 1:
  /*int countu=0;
   for(int i=0;i<n;i++){
    if(s[i]=='U')countu++;
   }
   if(countu&1)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;*/
   //Approach 2:
   string t=s;
   int i=0;
   while(true){
    if(count(t.begin(),t.end(),'U')==0|| t.size()==0){
        break;
    }
    if(t.size()<=2){
        int j=find(t.begin(),t.end(),'U')-t.begin();
        string ans="";
        for(int i=0;i<t.size();i++){
            if(i==j)continue;
            else ans.pb(t[i]);
        }
        t=ans;
    }else{
        int j=find(t.begin(),t.end(),'U')-t.begin();
        if(j==0){
            if(t[t.size()-1]=='D')t[t.size()-1]='U';
            else t[t.size()-1]='D';
            if(t[j+1]=='D')t[j+1]='U';
            else t[j+1]='D';
        }
        else if(j==t.size()-1){
            if(t[0]=='D')t[0]='U';
            else t[0]='D';
            if(t[j-1]=='D')t[j-1]='U';
            else t[j-1]='D';
        }
        else{
            if(t[j+1]=='D')t[j+1]='U';
            else t[j+1]='D';
            if(t[j-1]=='D')t[j-1]='U';
            else t[j-1]='D';
        }
        string ans="";
        for(int i=0;i<t.size();i++){
            if(i==j)continue;
            else ans.pb(t[i]);
        }
        t=ans;
    }
    i++;
   }
   if(i%2==0)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
