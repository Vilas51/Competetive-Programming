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
   int n; int y;
   cin>>n>>y;
   vector<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int j=n-1;
   for(int i=0;i<y;i++){
    while(a[j]<=0 &&j-1>=0){
        j--;
    }
    a[j]-=1; a[j-1]+=1; 
    if(j==1)break;
   }
   cout<<a[0]<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
