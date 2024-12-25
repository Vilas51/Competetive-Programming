#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i,a,b) for(ll i = a; i <= b; i++)
#define ff(i,a,b) for(ll i = a; i >= b; i--)
#define mod 1000000007



int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    string s;
    cin >> s;
    set<string> us;

    for (int i = 0; i <= s.size(); i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            string temp = s.substr(0, i) + c + s.substr(i);
            us.insert(temp);
        }
    }
    
    cout << us.size() << endl;
    
    return 0;
}
