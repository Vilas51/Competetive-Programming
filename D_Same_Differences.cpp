#include<bits/stdc++.h>
using namespace std;
void solve(){
    // int n; cin>>n;
    // vector<pair<int,int>>v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i].first;
    //     v[i].second=i;
    // }
    // sort(v.begin(),v.end());
    // int count=0,j=n-1,i=0;
    // while(i<=j){
    //     if(abs(v[j].first-v[j].second)==v[i].first-v[i].second){
    //         count++;
    //     }
    //     if(v[j].first-v[j].second==abs(v[i].first-v[i].second)){ 
    //         count++;
    //     }
    //     if(v[j].first-v[j].second>v[i].first-v[i].second){
    //        j--;
    //     }
    //     else{
    //        i++;
    //     }
    // }
    // // if(count!=0)count+=1;
    // // if(count==n-1)count=n+count-1;
    // // if(count==1)cout<<1<<endl;
    // // else cout<<count*(count-1)/2<<endl;
    // cout<<count<<endl;
    long long n; cin>>n; long long ans=0;
    map<long long,long long>m;
    for(long long i=0;i<n;i++){
        long long a; cin>>a;
        ans+=m[a-i];
        m[a-i]++;
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t; 
    while(t--){
        solve();
    }
}