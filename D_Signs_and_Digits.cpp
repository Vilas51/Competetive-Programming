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
//    sort(s.begin(),s.end());
// //    cout<<s<<endl;
   int c1=0,c2=0;
   for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
        c1++;
    }
    else if(s[i]=='1'){
        c1--;
    }
    else if(s[i]=='<'){
        c2++;
    }
    else{
        c2--;
    }
   }
   if((s.size()+1)%3==0&&(c1==-1&&c2==0)||(s.size()+1)%2==0&&(c1==0&&c2==abs(1))){
    cout<<"YES"<<endl;
   }else{
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
