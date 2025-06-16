#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    int n=3;
    for(int mask=0;mask<(1<<n);mask++){
        for(int i=0;i<n;i++){
            if(mask&(1<<i)){
                cout<<"#"<<mask<<"="<<(1<<i)<<" ";
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
}