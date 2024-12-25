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
int solve(vector<int>&arr) {
    int n=arr.size();
    if(n==0)return 0;
    int cs=arr[0];  
    int ms=arr[0];    
    for (int i=1;i<n;i++) {
        cs=max(arr[i],cs+arr[i]);  
        ms=max(ms,cs);  
    }
    return ms;
}
void solve(){
   ll n,m;
   cin>>n>>m;
   vector<string>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   bool fn=false,sa=false,tr=false,fe=false,k=false;
   vector<int>cc(n,0);
   for(int i=0;i<n;i++){
    int count=0;
    fn=false,sa=false,tr=false,fe=false,k=false;
    string s=v[i];
    bool f=false;
    for(int j=0;j<m;j++){
        if(s[j]=='n'){
            if(!fn){
                fn=true;
                f=false;
            }
        }
        else if(s[j]=='a'){
            if(fn)sa=true;
        }
        else if(s[j]=='r'){
            if(sa)tr=true;
        }
        else if(s[j]=='e'){
            if(tr)fe=true;
        }
        else{
            if(fe){
                f=true;
                k=true;
                fn=false;sa=false;tr=false;fe=false;k=false;
                count+=5;
            }
        }
    }
    if(!f)cc.pb(count-1);
    else cc.pb(count);
   }
//    debog
//    for(int i=0;i<cc.size();i++){
//     cout<<cc[i]<<" ";
//    }
    cout<<solve(cc)<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
