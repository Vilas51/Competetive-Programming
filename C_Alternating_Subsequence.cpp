#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i,a,b) for(ll i = a;i<=b;i++)
#define ff(i,a,b) for(ll i=a;i>=b;i--)
#define mod 1000000007
ll memoise(int ind, vector<int>&arr, int neg, int total,int sum){
    if(ind==arr.size()){
        if(total==k){
            neg=0;
            return 0;
        }
        else return LLONG_MIN;
    }

    if(total>k){
        neg=0;
        return 0;
    }
    if(dp[ind]!=-1)return dp[ind];

    ll takeour=LLONG_MIN;
    if(neg==0){
        if(arr[ind]<0)takeour=max(takeour,memoise(ind+1,arr,1,1,arr[ind])); 
        else takeour=max(takeour,memoise(ind+1,arr,2,1,arr[ind]));
    }else if(neg==1){
        if(arr[ind]<0)takeour=max(takeour,memoise(ind+1,arr,1,1,arr[ind]));
        else {
            takeour=max({takeour,memoise(ind+1,arr,2,total+1,sum+arr[ind]),memoise(ind+1,arr,2,1,arr[ind])});
        }
    }
    else {
        if(arr[ind]<0){
            takeour=max({takeour,memoise(ind+1,arr,1,total+1,sum+arr[ind]),memoise(ind+1,arr,1,1,arr[ind])});
        }
        else {
            takeour=max(takeour,memoise(ind+1,arr,2,total+1,sum+arr[ind]));
        }
    }

    return dp[ind]=max(dp[ind],takeour);
}

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>dp(n,INT_MIN);
    cout<<memoise(0,v,0,0,0)<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
