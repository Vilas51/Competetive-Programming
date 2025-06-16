#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t; cin>>t;
   while(t--){
      int n,k; cin>>n>>k;
      string ans="";
      for(int i=0;i<n;i++){
         for(int j=0;j<k;j++){
            ans+=(char)('a'+j);
         }
      }
      cout<<ans<<"\n";
   }
}
