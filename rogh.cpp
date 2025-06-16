// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define ld long double
// #define upd upper_bound
// #define lpd lower_bound
// #define pb push_back
// #define endl "\n"
// #define f(i,a,b) for(ll i = a;i<=b;i++)
// #define ff(i,a,b) for(ll i=a ;i>=b;i--)
// #define mod 1000000007
// void solve(){
//    string a,b; 
//    cin>>a>>b;
//    int c=0;
//    if(a<b){
//     c+=static_cast<int>(a);
//     cout<<c<<" "<<"a"<<endl;
//    }else{
//     cout<<int(b)<<" "<<"b"<<endl;
//    }
// }
// int main(){
//     ios::sync_with_stdio(0); cin.tie(0);
//     int t=1;
//     // int t; cin>>t;
//     while(t--){
//         solve();
//     }
// }
#include <iostream>
#include <string>

int main() {
    std::string str1 = "hello";
    std::string str2 = "world";

    int sum1 = 0, sum2 = 0;

    // Calculate sum of ASCII values of characters in str1
    for (char c : str1) {
        // cout<<static_cast<int>(c)<<" ";
        sum1 += static_cast<int>(c);
    }

    // Calculate sum of ASCII values of characters in str2
    for (char c : str2) {
        // cout<<static_cast<int>(c)<<" ";
        sum2 += static_cast<int>(c);
    }

    if (sum1 == sum2) {
        std::cout << "ASCII values sum of str1 is equal to sum of str2." << std::endl;
    } else if (sum1 < sum2) {
        std::cout << "ASCII values sum of str1 is less than sum of str2." << std::endl;
    } else {
        std::cout << "ASCII values sum of str1 is greater than sum of str2." << std::endl;
    }

    return 0;
}
