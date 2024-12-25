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
void solve(){
   string s; cin>>s;
   int h= stoi(s.substr(0, 2));
    int m= stoi(s.substr(3, 2));
    if(h==0){
        if(m<10){
                cout<<12<<":"<<0<<m<<" AM";
        }
        else{
            cout<<12<<":"<<m<<" AM";
        }cout<<endl;
        return;
    }
    if(h<12){
        cout<<s<<" AM"<<endl; return;
    }
    if(h==12){
        if(m<10){
                cout<<12<<":"<<0<<m<<" PM";
        }
        else{
            cout<<12<<":"<<m<<" PM";
        }cout<<endl;
        return;
    }
    else{
        int x=h%12;
        if(x<10){
            if(m<10){
                cout<<0<<x<<":"<<0<<m<<" PM";
            }
            else{
                cout<<0<<x<<":"<<m<<" PM";
            }cout<<endl;
        }else{
            if(m<10){
                cout<<x<<":"<<0<<m<<" PM";
            }
            else{
                cout<<x<<":"<<m<<" PM";
            }cout<<endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
