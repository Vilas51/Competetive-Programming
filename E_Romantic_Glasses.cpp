#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    // ll n; cin>>n;
    // vector<int>v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // ll odds=0, evens=0;
    // for(int i=0;i<n;i++){
    //     if(i&1) odds+=v[i];
    //     else evens+=v[i];
    // }
    // ll tempo=odds,tempe=evens;
    // ll tempo2=odds,tempe2=evens;
    // bool flag=0;
    // for(int i=0;i<n;i++){
    //     if(odds==evens){flag=1;break;}
    //     if(i&1)odds-=v[i];
    //     else evens-=v[i];
    // }
    // for(int i=n-1;i>=0;i--){
    //     if(tempo==tempe){flag=1;break;}
    //     if(i&1)tempo-=v[i];
    //     else tempe-=v[i];
    // }
    // int i=0, j=n-1;
    // while(i<j){
    //     if(tempo2==tempe2){flag=1;break;}
    //     if(i&1){
    //         tempo2-=v[i];
    //         if(tempo2==tempe2)flag=1; break;
    //     }
    //     else if(i&1==0){
    //         tempe2-=v[i];
    //         if(tempe2==tempo2)flag=1; break;
    //     }
    //     if(j&1){
    //         tempo2-=v[j];
    //         if(tempo2==tempe2)flag=1; break;
    //     }
    //     else if(j&1==0){
    //         tempe2-=v[j];
    //         if(tempe2==tempo2)flag=1; break;
    //     }
    //     i++; j--;
    // }
    // if(flag==1)cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
    ll n; cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }map<ll,ll>m;
    ll pre_sum=0;
    m[0]=1;
    for(int i=0;i<n;i++){
        if(i&1)v[i]*=-1;
        pre_sum+=v[i];
        if(m[pre_sum]){
            cout<<"YES"<<endl; return;
        }
        m[pre_sum]++;
    }
    cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}