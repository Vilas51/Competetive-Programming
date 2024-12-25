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
void print(vector<int>&v,int n){
   if(n<0){
      return;
      }
      cout<<v[n]<<" ";
      print(v,n-2);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n ; cin>>n;
    vector<int>vec(n);
   for(int i=0;i<n;i++){
   cin>>vec[i];
   }
   if(n%2==0){
         print(vec,n-2);
      }
      else{
       print(vec,n-1);
         }
         return 0;
}
