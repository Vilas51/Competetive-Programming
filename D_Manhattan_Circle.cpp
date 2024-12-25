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
   ll n,m;
   cin>>n>>m;
   char v[n][m];
   ll firsti,firstj,lasti,lastj;
   bool f1=0,f2=0;
   for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        cin>>v[i][j];
        if(v[i][j]=='#'){
            if(!f1){
                f1=1;
                firsti=i;
                firstj=j;
            }
            lasti=i;
            lastj=j;
        }
    }
   }
   ll lefti,leftj,righti,rightj;
   ll tik=0;
   ll tok=0;
for(ll j=0;j<m;j++){
   ll c=0;
   bool f3=0;
   for(ll i=0;i<n;i++){
        if(v[i][j]=='#'){
            if(f3==0){
                f3=1;
                tik=i;
            }
            c++;
        }
    }
    if(c==1){
        if(!f2){
            f2=1;
            lefti=j;
        }
        righti=j;
        // tok=t;
    }
   }
//    ll gand=0;
//    if(lefti!=0){
//     gand=lefti+1;
//    }
   cout<<(firsti+lasti)/2+1<<" "<<(lefti+righti)/2+1<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
