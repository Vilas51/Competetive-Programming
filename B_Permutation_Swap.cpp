#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(abs(v[i]-(i+1))!=0){
                ans=__gcd(abs(v[i]-(i+1)),ans);
            }
        }
        cout<<ans<<endl;
        // cout<<(int)ceil((ans+ans2)/2)<<endl;
    }
    return 0;
}