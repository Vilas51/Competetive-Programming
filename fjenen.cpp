#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    vector<int>freq(26,0);
    int x;
    for(int i=0;i<n;i++){
        if(i+2<n&&s[i+2]=='#'){
            x=(s[i1]-'0');
            x=(x*10)+(s[i+2]-'0');
            freq[x-1]++;
            i+=2;
        }
        else if(s[i]=='('){
                int y=0;
                while(s[i]!=')'){
                    y=y*10+(s[i]-'0');
                    i++;
                }
                freq[x-1]+=y;
        }
        else{
            x=s[i]-'0';
            freq[x-1]++;
        }
    }
    for(int i=0;i<26;i++)cout<<freq[i]<<" ";
    return 0;
}