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
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    map<int,int>mpg;
    int m;
    cin>>m;
    vector<int>g(m);
    for(int i=0;i<m;i++){
        cin>>g[i];
    }
    int count=0;
    sort(b.begin(),b.end());
    sort(g.begin(),g.end()); 
    //first error resolves this by ensuring least valid number there    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(b[i]-g[j])<=1){
                count++;
                g[j]=100000;
                break;
            }
        }
    }
    // can use two pointers like merge sort but this got ac 
    cout<<count<<endl;
    return 0;
}
