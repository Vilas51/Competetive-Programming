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
// ll strtoint(string s){
//     ll num=0;
//     for(ll i=0;i<s.size();i++){
//         if(s[i]=='1'){
//             num+=(1LL<<i);
//         }
//     }
//     return num;
// }
// string inttostr(ll num){
//     string s="";
//     for(ll i=0;i<64;i++){
//         if((1LL<<i)&num)s+="1";
//         else s+="0";
//     }
//     return s;
// }
// bool s2(vector<ll>&v,ll mid,ll k){
//     ll countfinal1=0;
//     for(ll i=0;i<v.size();i++){
//         ll num=v[i];
//         string numstr=inttostr(num);
//         // reverse(numstr.begin(),numstr.end());
//         ll count1=count(numstr.begin(),numstr.end(),'1');
//         for(ll j=0;j<numstr.size();j++){
//             if(numstr[j]=='0'){
//                 numstr[j]='1';
//                 ll newnum=strtoint(numstr);
//                 if(newnum-num>k){
//                     numstr[j]='0';
//                     break;
//                 }
//                 k-=newnum-num;
//                 num=newnum;
//                 count1++;
//             }
//         }
//         countfinal1+=count1;
//     }
//     return (countfinal1>=mid);
// }
ll next(ll num){
    string str="";
    for(int i=0;i<60;i++){
        if((1LL<<i)&num)str[i]+='1';
        else str[i]+='0';
    }
    bool found=false;
    for(int i=0;i<60;i++){
        if(str[i]=='0'){
            str[i]='1';
            found=true;
            break;
        }
    }
    if(!found)return -1;
    ll newnum=0;
    for(int i=0;i<60;i++){
        if(str[i]=='1'){
            newnum+=(1LL<<i);
        }
    }
    return newnum;
}
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    ll beauty=0;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
   for(ll i=0;i<n;i++){
    cin>>v[i];
    beauty+=__builtin_popcount(v[i]);
    ll nextnum=next(v[i]);
    if(nextnum!=-1){
        pq.push({nextnum,v[i]});
    }
   }
//    sort(v.rbegin(),v.rend());
//    ll l=0,r=64*n*100;
//    ll ans=0;
//    while(l<=r){
//     ll mid=l+(r-l)/2;
//     bool valid=s2(v,mid,k);
//     if(valid){
//         ans=mid;
//         l=mid+1;
//     }else{
//         r=mid-1;
//     }
//    }
//    cout<<ans<<endl;

    //using priority queue
   while(!pq.empty()&&k-(pq.top().first-pq.top().second)>=0){
        k=k-(pq.top().first-pq.top().second);
        ll currnum=pq.top().first;
        pq.pop();
        beauty++;
        ll nextnum=next(currnum);
        if(nextnum!=-1){
            pq.push({nextnum,currnum});
        }
   }
   cout<<beauty<<endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
}
