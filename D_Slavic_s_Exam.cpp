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
//    string t;
//    string s;
//    cin>>t>>s;
//    int n=t.size();
//    int m=s.size();
//    int i=0;
//    int j=0;
//    bool f=0;
//    while(i<n){
//     while(i<n&&j<m&&(t[i]==s[j]||t[i]=='?')){
//         i++;
//         j++;
//     }
//     if(j==m){
//         f=1;
//         break;
//     }
//     i++;
//    }
//    if(!f){
//     cout<<"NO"<<endl;
//     return;
//    }
//    string ans="";
//    i=0,j=0;
//     while(i<n){
//         while(i<n&&j<m&&(t[i]==s[j]||t[i]=='?')){
//             if(t[i]=='?'){
//                 ans+=s[j];
//             }
//             else{
//                 ans+=t[i];
//             }
//             i++;
//             j++;
//         }
//         if(j==m){
//             if(t[i]=='?')ans+='a';
//             else ans+=t[i];
//         }
//         else ans+=t[i];
//         i++;
//     }
//     cout<<"YES"<<endl;
//     cout<<ans<<endl;
    string t,s;
    cin>>t>>s;
    int i=0,j=0;
    while(i<t.size()&&j<s.size()){
        if(s[j]==t[i]||t[i]=='?'){
            t[i]=s[j];
            j++;
        }
        i++;
    }
    for(int k=0;k<t.size();k++){
        if(t[k]=='?'){
            t[k]='a';
        }
    }
    if(j==s.size()){
        cout<<"YES"<<endl;
        cout<<t<<endl;
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
