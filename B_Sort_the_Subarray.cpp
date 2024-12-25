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
pair<int,int>findLargestSortedSubarray(const vector<int>& arr) {
    int start = 0;  
    int end = 0;    
    int maxStart = 0; 
    int maxEnd = 0;  
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] >= arr[i - 1]) {
            end = i; 
            if (end - start > maxEnd - maxStart) {
                maxStart = start;
                maxEnd = end; 
            }
        } else {
            start = i; 
            end = i;  
        }
    }
    return {maxStart, maxEnd};
}
void solve(){
   int n; cin>>n;
   vector<int>v1(n),v2(n);
   for(int i=0;i<n;i++)cin>>v1[i];
   for(int i=0;i<n;i++)cin>>v2[i];
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(v1[i]!=v2[i]){
            first=i;
            break;
        }
    }
    for(int i=n-1;i>first;i--){
        if(v1[i]!=v2[i]){
            last=i;
            break;
        }
    }
    while(first>0){
        if(v2[first-1]>v2[first]){
            break;
        }
        first--;
    }
    while(last<n-1){
        if(v2[last+1]<v2[last]){
            break;
        }
        last++;
    }
    cout<<first+1<<" "<<last+1<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
