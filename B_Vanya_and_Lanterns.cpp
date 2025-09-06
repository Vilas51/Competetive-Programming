#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long 

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    double n,k;
    cin>>n>>k;
    vector<double>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    double maxi=0.000000000;
    for(int i=1;i<n;i++){
        if(v[i]-v[i-1]>maxi){
            maxi=v[i]-v[i-1];
        }
    }
    maxi=max(maxi/2,max(v[0],k-v[n-1]));
    // cout<<setprecision(10)<<maxi<<endl;
    cout << fixed << setprecision(10) << maxi << "\n";
}
