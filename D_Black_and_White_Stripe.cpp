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
   int n,k; cin>>n>>k;
   string s; cin>>s;
   int i;
   int countw=0,countb=0,res=0;
   for(i=0;i<k;i++){
    if(s[i]=='W')countw++;
    else countb++;
   }
   if(countb==k){
    cout<<0<<endl; 
    return;
   }
   else{
    res=countw;
   }
   int p=1;
   for(int j=i;j<n;j++){
        if(s[j]=='W')countw++;
        else countb++;
        if(s[p-1]=='W')countw--;
        else countb--;
        res=min(res,countw);
        p++;
   }
   cout<<res<<endl;
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
