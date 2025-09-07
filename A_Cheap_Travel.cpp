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
bool valid(int total, int len, int se, int singlecost, int secost){
    for(int i=1;i<=len;i++){
        int currtotalcost=i*singlecost;
        int req=ceil((len-i)/se);
        currtotalcost+=(req*secost);
        if(currtotalcost>=total)return true;
    }
    for(int i=1;i<=len;i++){
        int currtotalcost=(len-i)*singlecost;
        int req=ceil(i/se);
        currtotalcost+=(req*secost);
        if(currtotalcost>=total)return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<=b){
        cout<<n*a<<endl;
    }
    else {
        cout<<(n/m)*b+min((n%m)*a,b)<<endl;
    }

    //bs
    // int l=0,h=1e5;
    // int ans=0;
    // while(l<=h){
    //     int mid=(l+h)/2;
    //     if(valid(mid,n,m,a,b)){
    //         ans=mid;
    //         h=mid-1;
    //     }
    //     else{
    //         l=mid+1;
    //     }
    // }
    // cout<<ans<<endl;
}
