#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int ans=INT_MIN;
        int count=1;
        for(int i=0;i<n;i++){
            // if(s[i]=='<'){
            //     while(s[i]=='<' &&i<n){
            //             // if(i==n)break;
            //         count++;
            //         i++;
            //         ans=max(count,ans);
            //     }
            //     count=0;
            // // }
            // // else{   
            //     while(s[i]=='>' &&i<n){
            //             // if(i==n)break;
            //         count++;
            //         i++;
            //         ans=max(count,ans);
            //     } 
            // // }
            if(s[i]==s[i+1])count++;
            else count=1;
            ans=max(count,ans);
        }

        // if(ans>n){
        //     cout<<n+1<<endl;
        // }else{
            cout<<ans+1<<endl;
        // }
    }
    return 0;
}