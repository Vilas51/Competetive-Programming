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
   set<int>s1,s2;
   for(int i=0;i<n;i++){
    int a;
    cin>>a;
    s1.insert(a);
   }
   for(int i=0;i<n;i++){
    int a;
    cin>>a;
    s2.insert(a);
   }
   if(s1.size()==1||s2.size()==1){
    if(s1.size()==1){
        if(s2.size()>2){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(s2.size()==1){
        if(s1.size()>2){
            cout<<"YES"<<endl;
            return;
        }
    }
   }
   if(n==3){
    if(s1.size()<=2&&s2.size()<=2){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;
   }
   if(s1.size()>=2&&s2.size()>=2){
    cout<<"YES"<<endl;
    return;
   }
   cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
