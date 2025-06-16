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
    int n,a,x,b,y; cin>>n>>a>>x>>b>>y;
    if(a>=b && a<=y && x>=b &&x<=y){
        cout<<"YES"<<endl;
    }if(b>=a && b<=x && y>=a &&y<=x){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
