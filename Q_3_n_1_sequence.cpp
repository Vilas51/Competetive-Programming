#include <iostream>
using namespace std;
int solve(int n){
    if(n<=0)return 0;
    if(n==1)return 1;
    if(n==2)return 2;
   if(n%2==0) {
    //   cout<<n<<" ";
       return solve(n/2)+1;
   }
   else {
    //   cout<<n<<" ";
       return solve(3*n+1)+1;
   }
}
int main(){
    int t; cin>>t;
    cout<<solve(t)<<endl;
    return 0;
}