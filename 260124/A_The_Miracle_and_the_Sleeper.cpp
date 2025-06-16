#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        if (b <a * 2) {
            cout << b - a << endl;
        }
        else {
            cout << (b - 1) / 2 << endl;
        }
    }
}