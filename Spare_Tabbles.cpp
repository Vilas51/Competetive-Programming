#inlcude<bits/stdc++.h>
using namespace std;
const LOG=16;
const int n=100005;
int st[n][LOG];

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
        st[i][0]=arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=LOG;j++){
            st[i][j]=INT_MAX;
        }
    }

    //Precomputation of ST
    for(int j=1;j<=LOG;j++){
        for(int i=0;i+pow(2,j)-1<num;i++){
            st[i][j]=min(st[i][j-1],st[i+pow(2,(j-1))-1][j-1]);
        }
    }

    return 0;
}