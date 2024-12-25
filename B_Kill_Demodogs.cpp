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
   ll n; cin>>n;
   ll ans=0;
   ans+=((n*(n+1))%mod*(2*n+1)%mod)%mod/6;
   ans+=((((n-1)*((n-1)+1))%mod*(2*(n-1)+1)%mod)%mod/6)+(n*(n-1))%mod/2;
   cout<<((ans%mod*2022%mod)%mod)%mod<<endl;

   //Submitted this in python due to overflow in cpp: 
//    for _ in range(int(input())):
//     n=int(input())
//     def helper(n):
//         return ((n*(n+1)*(2*n+1))//6)
//     p=helper(n)
//     p1=helper(n-1)
//     t=(n*(n-1))//2
//     res=((p+p1+t)*(2022))%(10**9+7)
//     print(res)
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
