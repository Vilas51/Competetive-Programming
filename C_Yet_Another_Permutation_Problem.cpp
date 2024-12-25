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
//    ll n; cin>>n; 
//    vector<int>v(n+1);
//    for(int i=0;i<=n;i++){
//     v[i]=i;
//    }
//    set<int>us;
//    for(int i=2;i<=n;i++){
//     if(i==n){
//         break;
//     }
//     else{
//         ll z=v[i];
//         ll j=2;
//         while(z*j<=n){
//             if(us.find(z*j)==us.end()){
//                 v[i]=j;
//                 v[j]=i;
//                 us.insert(gcd(z*j,j));
//                 break;
//             }
//             j++;
//         }
//     }
//    }
//    for(int i=1;i<=n;i++){
//     cout<<v[i]<<" ";
//    }
//    cout<<endl;
        int n;
        cin >> n;
        vector<int> a(n);
        int cur = 0;
        for (int i = 1; i <= n; i += 2) {
            for (int j = i; j <= n; j *= 2) {
                a[cur++] = j;
            }
        }
        for (int i = 0; i<n; ++i) {
            cout << a[i] << " ";
        }
        cout << '\n';
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
