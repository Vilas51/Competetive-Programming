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
   
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int count1=0,count2=0,count3=0,count4=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1)count1++;
        else if(x==2)count2++;
        else if(x==3)count3++;
        else count4++;
    }
    ll count=0;
    if(count4>0){
        count+=count4;
    }
    if(count1>0 && count3>0){
        int res=min(count1,count3);
        count+=res;
        count1-=res;
        count3-=res;
    }
    // cout<<count<<" ";
    if(count2>1){
        int res=count2/2;
        count+=res;
        count2-=count2/2*2;
    }
    if(count1>1 && count2>=1){
        // int cc=count1/2;
        int res=min(count1/2,count2);
        count+=res;
        count1-=res*2;
        count2-=res;
    }
    // cout<<count<<" ";
    if(count1>0 && count2>0){
        int res=min(count1,count2);
        count+=res;
        count1-=res;
        count2-=res;
    }
    if(count1>3){
        int res=count1/4;
        count+=res;
        count1-=res*4;
    }
    // cout<<count<<" ";
    if(count1>0)count+=1;
    if(count2>0)count+=1;
    if(count3>0)count+=count3;
    cout<<count<<endl;
}
