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
   int n; string s;
   cin>>n>>s;
   int x=0,y=0,ni=0,w=0,e=0,sc=0;
   for(int i=0;i<n;i++){
    if(s[i]=='N'){
        y++;
        ni++;
    }
    else if(s[i]=='W'){
        x--;
        w++;
    }
    else if(s[i]=='S'){
        y--;
        sc++;
    }
    else {
        x++;
        e++;
    }
   }
   if(x%2==0&& y%2==0){
    if(x%2==0){
        if(!e%2&&!w%2){
            int re=e/2;
            int rw=w/2;
            int rt=e/2;
            int ri=w/2;
            for(int i=0;i<n;i++){
                if(re>0&&s[i]=='E'){
                    s[i]='R';
                    re--;
                    continue;
                }
                if(s[i]=='W'&&rw>0){
                    s[i]='R';
                    rw--;
                    continue;
                }
                if(s[i]=='E'&&rt>0){
                    s[i]='H';
                    rt--;
                    continue;
                }
                if(s[i]=='W'&&ri>0){
                    s[i]='H';
                    ri--;
                    continue;
                }
            }
        }
        if(e%2&&w%2){
            int total=e+w;
            int re=e/2+1;
            int rw=w/2+1;
            int rt=total-re+rw;
            for(int i=0;i<n;i++){
                if(re>0&&s[i]=='E'){
                    s[i]='R';
                    re--;
                    continue;
                }
                if(s[i]=='W'&&rw>0){
                    s[i]='R';
                    rw--;
                    continue;
                }
                if(s[i]=='E'&&rt>0||s[i]=='W'&&rt>0){
                    s[i]='H';
                    rt--;
                    continue;
                }
            }
        }
    }
    if(y%2==0){
        if(!ni%2&&!sc%2){
            int re=ni/2;
            int rw=sc/2;
            int rt=ni/2;
            int ri=sc/2;
            for(int i=0;i<n;i++){
                if(re>0&&s[i]=='N'){
                    s[i]='R';
                    re--;
                    continue;
                }
                if(s[i]=='S'&&rw>0){
                    s[i]='R';
                    rw--;
                    continue;
                }
                if(s[i]=='N'&&rt>0){
                    s[i]='H';
                    rt--;
                    continue;
                }
                if(s[i]=='S'&&ri>0){
                    s[i]='H';
                    ri--;
                    continue;
                }
            }
        }
        if(ni%2 && sc%2){
            int total=ni+sc;
            int re=ni/2+1;
            int rw=sc/2+1;
            int rt=total-re+rw;
            for(int i=0;i<n;i++){
                if(re>0&&s[i]=='N'){
                    s[i]='H';
                    re--;
                    continue;
                }
                if(s[i]=='S'&&rw>0){
                    s[i]='H';
                    rw--;
                    continue;
                }
                if(s[i]=='N'&&rt>0||rt>0&&s[i]=='S'){
                    s[i]='R';
                    rt--;
                    continue;
                }
            }
        }
    }
    cout<<s<<endl;
   }
   else cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
