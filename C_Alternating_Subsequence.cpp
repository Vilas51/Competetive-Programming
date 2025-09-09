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
ll ans=LLONG_MIN;
ll memoise(int ind, vector<int>&arr,vector<int>&dp, int neg, int total,int sum,int currmax){
    if(ind==arr.size()){
        if(total>currmax){
            // neg=0;
            ans=sum;
            currmax=total;
            return 0;
        }
        else if(total==currmax){
            ans=max(ans,(ll)sum);
            // currmax=total;
            return 0;
        }
        else return LLONG_MIN;
    }

    if(total>currmax){
        // neg=0;
        ans=sum;
        currmax=total;
        return 0;
    }
    if(total==currmax){
        ans=max(ans,(ll)sum);
        // currmax=total;
        return 0;
    }

    if(dp[ind]!=-1)return dp[ind];

    ll takeour=LLONG_MIN;
    if(neg==0){
        if(arr[ind]<0)takeour=max(takeour,memoise(ind+1,arr,dp,1,1,arr[ind],currmax)); 
        else takeour=max(takeour,memoise(ind+1,arr,dp,2,1,arr[ind],currmax));
    }else if(neg==1){
        if(arr[ind]<0)takeour=max(takeour,memoise(ind+1,arr,dp,1,1,arr[ind],currmax));
        else {
            takeour=max({takeour,memoise(ind+1,arr,dp,2,total+1,sum+arr[ind],currmax),memoise(ind+1,arr,dp,2,1,arr[ind],currmax)});
        }
    }
    else {
        if(arr[ind]<0){
            takeour=max({takeour,memoise(ind+1,arr,dp,1,total+1,sum+arr[ind],currmax),memoise(ind+1,arr,dp,1,1,arr[ind],currmax)});
        }
        else {
            takeour=max(takeour,memoise(ind+1,arr,dp,2,total+1,sum+arr[ind],currmax));
        }
    }

    return dp[ind]=max((ll)dp[ind],takeour);
}

void solve(){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // vector<int>dp(n,INT_MIN);
    // memoise(0,v,dp,0,0,0,0);
    // cout<<ans<<endl;

    vector<int>v2;
    for(int i=0;i<n;i++){
        int curr=INT_MIN;
        if(v[i]<0){
            while(i<n&&v[i]<0){
                curr=max(curr,v[i]);
                i++;
            }
            // if(i==n){
            //     v2.pb(curr);
            //     break;
            // }
            // else 
            if(i<n)i--;
        }else {
            // int curr=INT_MIN;
            while(i<n&&v[i]>0){
                curr=max(curr,v[i]);
                i++;
            }
            // if(i==n){
            //     v2.pb(curr);
            //     break;
            // }
            // else 
            if(i<n)i--;
        }
        v2.pb(curr);
    }

    ll ans1=0,ans2=0;
    bool stwithneg=1,stwithpos=1;
    int count1=0,count2=0;
    for(int i=0;i<v2.size();i++){
        if(stwithneg){
            if(v2[i]<0){
                stwithneg=false;
                count1++;
                ans1+=v2[i];
            }
        }else{
            if(v2[i]>0){
                stwithneg=true;
                count1++;
                ans1+=v2[i];
            }
        }
        if(stwithpos){
            if(v2[i]>0){
                stwithpos=false;
                count2++;
                ans2+=v2[i];
            }
        }else{
            if(v2[i]<0){
                stwithpos=true;
                count2++;
                ans2+=v2[i];
            }
        }
    }
    if(count1>count2){
        cout<<ans1<<endl;
    }else if(count2>count1){
        cout<<ans2<<endl;
    }else{
        cout<<max(ans1,ans2)<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
