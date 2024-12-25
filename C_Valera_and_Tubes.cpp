#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define mod 1000000007
void solve(){
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<int,int>>v;
    bool f=0;
    for(int i=0;i<n;i++){
        if(!f){
            for(int j=0;j<m;j++){
                v.pb({i+1,j+1});
            }
            f=1;
        }
        else{
            for(int j=m-1;j>=0;j--){
                v.pb({i+1,j+1});
            }
            f=0;
        }
    }
    int tot=v.size();
    int p=v.size()/k;
    int done=0;
    int ind=0;
    int c=0;
    for(int i=0;i<k;i++){
        if(i!=k-1){
            int j=0;
            cout<<p<<" ";
            while(ind<tot&&j<p){
                cout<<v[ind].first<<" "<<v[ind].second<<" ";
                ind++; j++;
                c++;
            }
            cout<<endl;
        }
        else{
            cout<<tot-c<<" ";
            while(ind<tot){
                cout<<v[ind].first<<" "<<v[ind].second<<" ";
                ind++;
            }
            cout<<endl;
        }
    }
    return 0;
}
