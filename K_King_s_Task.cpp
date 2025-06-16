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
    int n;
    cin>>n;
    vector<int>v(2*n);
    for(int i=0;i<2*n;i++){
        cin>>v[i];
    }
    vector<int>temp1=v,temp2=v;
    int count1=0,count2=0;
    bool checker1=0,checker2=0;
    int vihir=5*n;
    bool nilya=0;
    while(vihir--){
        bool kasav=0;
        for(int i=0;i<2*n;i++){
            if(temp1[i]!=i+1){
                kasav=1;
                break;
            }
        }
        if(!kasav){
            checker1=1;
            break;
        }
        if(!nilya){
            for(int i=0;i<n;i++){
                swap(temp1[i],temp1[n+i]);
            }
            nilya=1;
        }else{
            for(int i=0;i<2*n-1;i+=2){
                swap(temp1[i],temp1[i+1]);
            }
            nilya=0;
        }
        count1++;
    }
    int vihir2=5*n;
    bool nilyaa=1;
    while(vihir2--){
        bool kasav=0;
        for(int i=0;i<2*n;i++){
            if(temp2[i]!=i+1){
                kasav=1;
                break;
            }
        }
        if(!kasav){
            checker2=1;
            break;
        }
        if(!nilyaa){
            for(int i=0;i<n;i++){
                swap(temp2[i],temp2[n+i]);
            }
            nilyaa=1;
        }else{
            for(int i=0;i<2*n;i++){
                swap(temp2[i],temp2[i+1]);
                i++;
            }
            nilyaa=0;
        }
        count2++;
    }
    if(!checker1&&!checker2){
        cout<<-1<<endl;
        return;
    }
    int ans=INT_MAX;
    if(checker1)ans=min(ans, count1);
    if(checker2)ans=min(ans, count2);
    cout<<ans<<endl;
    //guddya
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    int t=1;
    while(t--){
        solve();
    }
}
