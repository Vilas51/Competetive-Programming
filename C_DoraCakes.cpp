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
   int n,k;
   cin>>n>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   sort(v.begin(),v.end());
   int ind=-1;
   for(int i=0;i<n;i++){
    if(v[i]<=k)ind=i;
    else break;
   }
   ll nobita=0;
    bool f=0;
    if(ind!=-1){
        for(int i=ind;i>=0;i--){
            if(!f){
                nobita+=v[i];
                f=1;
            }
            else{
                f=0;
            }
        }
    }
    for(int i=ind+1;i<n;i++){
        priority_queue<long long>temp;
        temp.push(v[i]);
        while (!temp.empty()) {
            long long top = temp.top();
            if (top <= k) {
                if (!f) {
                    nobita += top;
                    f = 1;  
                } else {
                    f = 0; 
                }
                temp.pop(); 
            } else {
                temp.pop();
                if (top % 2 != 0) {
                    temp.push(top / 2 + 1);
                    temp.push(top / 2);
                } else {
                    temp.push(top / 2);
                    temp.push(top / 2);
                }
                if (!f) {
                    f = 1;
                } else {
                    f = 0;
                }
            }
        }
    }
    cout<<nobita<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}
