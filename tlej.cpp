#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k;
    cin>>n>>k;
    long long v[n];
    for(int i=0;i<n;i++)cin>>v[i];
    
    long long  l;
    for(int i=0;i<INT_MAX;i++){
        long long tp=(2*k-(i*(i+1))-2);//lovely
        if (tp%2==0){
            l=tp/2;
            if(i>=l) break;
        }
    }
    cout<<v[l]<<endl;
    return 0;
}
