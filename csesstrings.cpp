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

void permute(string &s, set<string> &v, int i = 0) {
    if (i == s.size()) {
        v.insert(s);
        return;
    }
    for (int j = i; j < s.size(); j++) {
        swap(s[j], s[i]);
        permute(s, v, i + 1); 
        swap(s[i], s[j]); 
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string s;
    cin >> s;
    set<string> v;
    permute(s, v, 0); 
    cout << v.size() << endl;
    for (auto permutation : v) {
        cout << permutation << endl;
    }
    return 0;
}