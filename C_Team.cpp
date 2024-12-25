#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i, a, b) for (ll i = a; i <= b; i++)
#define ff(i, a, b) for (ll i = a; i >= b; i--)
#define mod 1000000007
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m;
    cin >> n >> m;
    if (n<m&&n * 2 + 2 >= m||n==m){
       string s="";
        while(n>0){
            s+="10";
            n--;
            m--;
        } 
        if(m>0){
            string news="";
            ll i=0;
            while(m>0&&i<s.size()){
                if(s[i]=='1'){
                    news+="11";
                    m--;
                }
                else{
                    news+=s[i];
                }
                i++;
            }
            for(int j=i;j<s.size();j++){
                news+=s[j];
            }
            while(m>0){
                news.push_back('1');
                m--;
            }
            cout<<news<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    else if(n==m+1){
        string s="";
        bool f=0;
        for(int i=0;i<n+m;i++){
            if(!f){
                s+="0";
                f=1;
            }
            else{
                s+="1";
                f=0;
            }
        }
        cout<<s<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
    return 0;
}
