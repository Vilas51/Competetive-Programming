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
void solve() {
    int n, f, k;
    cin >> n >> f >> k;
    vector<pair<int, int>> v(n);
    int fav = 0, ind = 0;

    // Read the values into the vector and determine the favorite value and its index
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
        if (i == f - 1) {
            fav = v[i].first;
            ind = i;
        }
    }

    // Sort the vector in descending order based on the first element of the pairs
    sort(v.rbegin(), v.rend());

    // Define the lambda function to return a value from the specified range
    // auto lbd = [](auto start, auto end) -> pair<int, int> {
    //     return *start; // Example: return the first element in the range
    // };

    // // Use the lambda function to get the value from the sorted vector starting from index k
    // pair<int, int> z = lbd(v.begin() + k, v.end());

    // Check the conditions and print the appropriate response
    if (v[k-1].first < fav) {
        cout << "YES" << endl;
    }
    else if (v[k-1].first == fav) {
        if (k == n || v[k].first != fav) {
                cout << "YES" << endl;
        }
        else {
            cout << "MAYBE" << endl;
        }
    }  
     else {
        cout << "NO" << endl;
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
