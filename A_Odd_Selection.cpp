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
   int n,k;
   cin>>n>>k;
   vector<int>v(n);
   int countodd=0,counteven=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]%2!=0)counteven++;
    else countodd++;
   }
   if(k%2==0&&countodd==0){
    cout<<"NO"<<endl;
    return;
   }
   if(k==1){
    if(counteven>=1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }
   else{
        k-=countodd;
        if(k<=0){
            if(counteven>=1){
                cout<<"YES"<<endl;
                return;
            }else{
                cout<<"NO"<<endl;
            return;
            }
        }
        if(k%2==0&&k-counteven==0){
            cout<<"NO"<<endl;
            return;
        }else{
            cout<<"YES"<<endl;
            return;
        }
        // if(counteven>k){
        //     cout<<"YES"<<endl;
        //         return;
        // }else{
        //     cout<<"NO"<<endl;
        //         return;
        // }
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
