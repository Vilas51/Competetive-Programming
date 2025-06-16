#include <bits/stdc++.h>
using namespace std;
 // map<int,int>m;
    // int arr[]={0,0,0,0,0,0,0,0};
    // for(int i=l;i<=r;i++){
    //     if(i%2==0){
    //         arr[0]++;
    //     }
    //     if(i%3==0){
    //         arr[1]++;
    //     }
    //     if(i%5==0){
    //         arr[2]++;
    //     }
    //     if(i%7==0){
    //         arr[3]++;
    //     }
    //     if(i%11==0){
    //         arr[4]++;
    //     }
    //     if(i%19==0){
    //         arr[5]++;
    //     }
    //     if(i%23==0){
    //         arr[6]++;
    //     }
    //     if(i%27==0){
    //         arr[7]++;
    //     }
    //     if(arr[0]>(r-l+1)/2 ||arr[1]>(r-l+1)/2){
    //         break;
    //     }  
    // }
    // int maxi=0; int ans=0;
    // for(int i=0;i<8;i++){
    //     if(arr[i]>maxi){
    //         maxi=arr[i];
    //         if(i==0){
    //             ans=2;
    //         }else if(i==1){
    //             ans=3;
    //         }else if(i==2){
    //             ans=5;
    //         }else if(i==3){
    //             ans=7;
    //         }else if(i==4){
    //             ans=11;
    //         }else if(i==5){
    //             ans=19;
    //         }else if(i==6){
    //             ans=23;
    //         }else{
    //             ans=27;
    //         }
    //     }
    // }
    // cout<<ans<<endl;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int l,r; cin>>l>>r;
    if((r-l+1)==2) cout<<l<<endl;
    else if((r-l+1)==3 && l%3==0 || r%3==0)cout<<3<<endl;
    else cout<<2<<endl;
    return 0;
}
