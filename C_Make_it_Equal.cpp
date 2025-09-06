#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>s(n),t(n);
    map<int,int>mp1;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        cin>>t[i];
        mp1[t[i]%k]++;
    }

    for(int i=0;i<n;i++){
        int rem=s[i]%k;
        int rem2=abs(rem-k);
        // cout<<rem<<" "<<rem2<<endl;
        if(mp1.find(rem)==mp1.end()&&mp1.find(rem2)==mp1.end()){
            cout<<"NO"<<endl;
            return;
        }
        if(mp1.find(rem)!=mp1.end()){
            mp1[rem]--;
            if(mp1[rem]==0){
                mp1.erase(rem);
            }
            continue;
        }
        if(mp1.find(rem2)!=mp1.end()){
            mp1[rem2]--;
            if(mp1[rem2]==0){
                mp1.erase(rem2);
            }
        }
    }
    cout<<"YES"<<endl;
    // return;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}