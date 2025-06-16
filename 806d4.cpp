
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
    // ios::sync_with_stdio(0); cin.tie(0);
    string s; cin>>s;
  for(int i=0;i<s.size();i++){
    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i]=='Y'||s[i]=='y') {
        continue;
    }
    else{
      cout<<".";
      if(s[i]>='A'&& s[i]<='Z'){
        cout<<static_cast<char>(tolower(s[i]));
      }
      else{
        cout<<s[i];
      }
    }
  }
  cout<<endl;
}
