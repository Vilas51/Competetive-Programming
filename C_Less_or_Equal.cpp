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
   
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    int lo=1,hi=v.back();
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int count=0;
        for(int i=0;i<n;i++){
            if(v[i]<=mid)count++;
            else break;
        }
        if(count==k){
            ans=mid;
            cout<<ans<<endl;
            return 0;
            hi=mid-1; 
        }
        else if(count<k){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
        // cout<<mid<<" ";
    }
    cout<<ans<<endl;
    return 0;
}
