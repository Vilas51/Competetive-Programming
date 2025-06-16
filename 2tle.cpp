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
bool cmp(int a, int b){
    if((a+b)%2!=0){
        return a<b;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
