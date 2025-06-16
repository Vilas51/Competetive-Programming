

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
// cont int mod=1e9+7;
void solve(){
    int si;
    cin>>si;
    vector<int>nums(si);
    for(int i=0;i<si;i++){
        cin>>nums[i];
    }
    map<int,int>forw,back;
    int n=nums.size();
    for(int i=0;i<n;i++){
        back[nums[i]]++;
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        if(i==0){
            forw[nums[i]]++;
            back[nums[i]]--;
            if(back[nums[i]]==0){
                back.erase(nums[i]);
            }
            continue;
        }
        back[nums[i]]--;
        if(back[nums[i]]==0){
            back.erase(nums[i]);
        }
        int num=nums[i],reqnum=nums[i]*2;
        cout<<i<<" "<<forw[reqnum]<<" "<<back[reqnum]<<endl;
        if(forw.find(reqnum)==forw.end()||back.find(reqnum)==back.end()){
            continue;
        }
        count=(count+min(forw[reqnum],back[reqnum]))%mod;
        forw[nums[i]]++;
    }
    cout<<count<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    int t=1;
    while(t--){
        solve();
    }
}



// class Solution {
// public:
    // int mod=1e9+7;
    // int specialTriplets(vector<int>& nums) {
    //     map<int,int>forw,back;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         back[nums[i]]++;
    //     }
    //     int count=0;
    //     for(int i=0;i<n-1;i++){
    //         if(i==0){
    //             forw[nums[i]]++;
    //             back[nums[i]]--;
    //             if(back[nums[i]]==0){
    //                 back.erase(nums[i]);
    //             }
    //             continue;
    //         }
    //         back[nums[i]]--;
    //         if(back[nums[i]]==0){
    //             back.erase(nums[i]);
    //         }
    //         int num=nums[i],reqnum=nums[i]*2;
    //         if(forw.find(reqnum)==forw.end()||back.find(reqnum)==back.end()){
    //             continue;
    //         }
    //         cout<<i<<" "<<forw[reqnum]<<" "<<back[reqnum]<<endl;
    //         count=(count+min(forw[reqnum],back[reqnum]))%mod;
    //         forw[nums[i]]++;
    //     }
    //     return count;
    // }
// };©leetcode