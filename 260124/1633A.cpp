#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      if(n%7==0){
        cout<<n<<"\n";
        continue;
      }
       int ans = -1;
    for (int j = 0; j < 10; ++j) {
        if ((n - n % 10 + j) % 7 == 0) {
            ans = n - n % 10 + j;
            break;
        }
    }cout<<ans<<endl;
   }
   return 0;
}