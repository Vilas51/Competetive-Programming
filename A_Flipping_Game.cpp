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
   //
}
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    int c1=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1)c1++;
    }
    int ans=0,sum=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)sum++;
        else sum--;
        ans=max(ans,sum);
        if(sum<0)sum=0;
    }
    if(c1==n)cout<<c1-1<<endl;
    else cout<<c1+ans<<endl;
}
