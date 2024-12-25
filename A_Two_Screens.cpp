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
   string a,b;
   cin>>a>>b;
   int n=a.size(),m=b.size();
   if(n==m){
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]==b[j]){
            i++; 
            j++;
        }else{
            break;
        }
    }
    int c=0;
    if(j>0){
        c+=j;
    }
    if(i<n){
        while(i<n){
            c+=2;
            i++;
            j++;
        }
        if(j>0)c++;
    }
    if(j<m){
        c+=(m-j+1);
    }
    if(a[0]!=b[0])c--;
    cout<<c<<endl;
   }else{
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]==b[j]){
            i++; 
            j++;
        }else{
            break;
        }
    }
    int c=0;
    if(j>0){
        c+=j;
    }
    if(i<n){
        while(i<n){
            c+=2;
            i++;
            j++;
        }
        if(j>0){
            c++;
        }
    }
    if(j<m){
        c+=(m-j+1);
    }
        
    cout<<c<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
