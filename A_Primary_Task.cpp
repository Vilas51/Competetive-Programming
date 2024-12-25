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
   string s=to_string(n);
   int size=s.size();
   if(size>2){
    if(s[0]!='1'||s[1]!='0'){
        cout<<"NO"<<endl;
    }
    else{
        if(size==3&&s[2]<='1'||size>3&& s[2]=='0'||size>3&& s[2]=='0'&&s[3]=='0'||size>3&& s[2]=='0'&&s[3]=='0'&&s[4]=='0'||size>3&& s[2]=='0'&&s[3]=='0'&&s[4]=='0'&&s[5]=='0'){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
   }
   else{
    cout<<"NO"<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
