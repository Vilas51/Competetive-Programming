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
   vector<int>dividers;
   if(ceil(n*(n+1)/2/n)==k){
    cout<<n<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }cout<<endl;
    return;
   }
   for(int i=3;i*i<=n;i+=2){
    if(n%i==0){
        dividers.pb(i);
        if(i!=n/i)dividers.pb(n/i);
    }
   }
   dividers.pb(n);
//    sort(dividers.begin(),dividers.end());
   int x=-1;
   int gap=-1;
   for(int i=0;i<dividers.size();i++){
    int curr_div=dividers[i];
    int j=1;
    bool f=0;
    while(j<=ceil(n/curr_div)){
        int sum=curr_div*(curr_div+1)/2;
        if(j>1){
            sum+=(curr_div-1)*(curr_div)/2;
        }
        if(ceil(sum/curr_div)==k){
            gap=j;
            x=curr_div;
            f=1;
            break;
        }
        else if(ceil(sum/curr_div)<k){
            j++;
        }
        else{
            break;
        }
    }
    if(f)break;
   }
   if(x!=-1){
    cout<<x<<endl;
    int sum=0;
    for(int i=1;i<=x;i++){
        if(i!=1){
            cout<<i+gap<<" ";
            sum+=i+gap;
        }else {
            cout<<1<<" ";
            sum+=1;
        }
    }
    // cout<<sum/x<<" ";
    cout<<endl;
   }else{
    cout<<-1<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
