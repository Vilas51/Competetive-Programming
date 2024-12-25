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
   int n; cin>>n;
   vector<pair<int,string>>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i].first; cin>>v[i].second;
   }int count=0,count1=0,count2=0; bool f1=0,f2=0; 
   for(int i=0;i<n;i++){
    string s=v[i].second;
    if(s[0]=='1' && s[1]=='1'){
        if(count!=0){
            count=min(v[i].first,count); 
        }else{
            count=v[i].first;
        }
        f1=1; f2=1;
        // break;
    }
    else if(s[0]=='1'&& s[1]=='0'){
        if(count1!=0){
            count1=min(v[i].first,count1); 
        }else{
            count1=v[i].first;
        }
        f1=1;
    }
    else if(s[0]=='0'&& s[1]=='1'){
        if(count2!=0){
            count2=min(v[i].first,count2); 
        }else{
            count2=v[i].first;
        }
        f2=1;
    }
    // else{
    //    continue; 
    // }
    // if(f1==1&&f2==1)break;
   }
   if(count==0){
    count=count1+count2;
   }
   if(count1!=0&&count2!=0&&count!=0){
    count=min(count,count1+count2);
   }
   if(f1==0||f2==0)count=-1;
   cout<<count<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
