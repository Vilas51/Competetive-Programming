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
    string s;
    cin>>s;
    int q;
    cin>>q;
    int n=s.size();
    vector<int>prefix(n,0);
    for(int i=1;i<n;i++){
        int count=0;
        if(s[i]==s[i-1])count=1;
        if(i==0)prefix[i]=count;
        else prefix[i]=count+prefix[i-1];
        // cout<<prefix[i]<<" ";
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        // if(l==0)cout<<prefix[r]<<endl;
        // else 
        cout<<prefix[r]-prefix[l]<<endl;
    }
    return 0;
}
