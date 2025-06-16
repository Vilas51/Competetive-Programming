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
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   multiset<int>m;
   for(int i=0;i<n;i++)m.insert(v[i]);
   int ans=0;
   while(!m.empty()){
      ans++;
      int val=*m.begin();
      m.erase(m.begin());
      while(m.upper_bound(val)!=m.end()){
         int newval=*m.upper_bound(val);
         m.erase(m.find(newval));
         val=newval;
      }
   }
   cout<<ans<<endl;
}
