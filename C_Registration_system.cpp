#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    vector<string>v(n);
    map<string,int>m;
    for(int i=0;i<n;i++){
        cin>>v[i]; m[v[i]]++;
        if(m[v[i]]==1){
            cout<<"OK"<<endl;
        }else{
            cout<<v[i]<<m[v[i]]-1<<endl;;
        }
    }
    // for(int i=0;i<n;i++){
    // }
    return 0;
}