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
//    int n; cin>>n;
//    string a,b;
//    cin>>a>>b;
//    ll c1=0,c0=0;
//    for(int i=0;i<n;i++){
//     if(a[i]=='1'){
//         c1++;
//     }else{
//         c0++;
//     }
//    }
//     ll operation=0;
//     for(int i=n-1;i>=0;i--){
//         if(a[i]==b[i]&&a[i]=='1' ){
//             c1--;
//         }
//         else if(a[i]==b[i]&&a[i]=='0'){
//             c0--;
//         }
//         if(a[i]!=b[i]){
//             if(c1==c0){
//                 operation++;
//                 if(operation%2!=0){
//                     if(a[i]=='1'){
//                         a[i]='0';
//                      }else{
//                         a[i]='1';
//                     }
//                 }
//                 if(a[i]!=b[i]){
//                     cout<<"NO"<<endl;
//                     return;
//                 }
//             }
//             else{
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }
//     }
//     cout<<"YES"<<endl; return;
    int n;
cin>>n;
string a,b;
cin>>a>>b;
bool f=0;
int o=count(a.begin(),a.end(),'1');
int e=count(a.begin(),a.end(),'0');
for(int i=n-1;i>=0;i--){
    if(f){
        if(a[i]==b[i]){
            if(o!=e){
                cout<<"NO\n";
                return;
                }
            f=0;
            }
    }
    else{
        if(a[i]!=b[i]){
                if(o!=e){
                    cout<<"NO\n";return;
                    }
                f=1;
            }
    }
    if(a[i]=='0')e--;
    else o--;
}
cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
