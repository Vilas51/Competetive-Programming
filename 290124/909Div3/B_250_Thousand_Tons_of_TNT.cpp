#include <bits/stdc++.h> 
using namespace std; 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
int main(){
    int N = 150000 + 1;
    vector<vector<int>> div(N);
    for(int i=1; i<N; i++){   
        for(int j=2*i; j<N; j+=i)
            div[j].pb(i);
    }
    _test{
        int n;
        cin>>n;
        vector<ll int> a(n);
        for(auto &e: a)     cin>>e;
        ll int ans = 0;
        for(auto d: div[n]){
            ll int mmin = 1e18;
            ll int mmax = -1e18;
            ll int s;
            for(int i=0; i<n; i+=d){
                s = accumulate(a.begin()+i, a.begin()+i+d, 0ll);
                mmin = min(mmin, s);
                mmax = max(mmax, s);
            }
            ans = max(ans, mmax-mmin);
        }
        cout<<ans<<"\n";
    }
}