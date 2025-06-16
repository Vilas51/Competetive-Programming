#include <bits/stdc++.h>
using namespace std;
long long countOfSubstrings(string word, int k) {
    unordered_map<char,long long>um;
    long long n=word.size();
    long long i=0,j=0;
    long long count=0;
    long long ans=0;
    um['a']=0; um['e']=0; um['i']=0; um['o']=0; um['u']=0;
    set<pair<long long,long long>>s;
    while(j<n){
        if(word[j]=='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u'){
            um[word[j]]++;
        }else{
            count++;
        }

        if(count==k&&um['a']>0&&um['e']>0&&um['i']>0&&um['o']>0&&um['u']>0){
            long long temp=i;
            while(temp>=0&&count==k&&um['a']>0&&um['e']>0&&um['i']>0&&um['o']>0&&um['u']>0){
                ans++;
                if(word[temp]=='a'||word[temp]=='e'||word[temp]=='i'||word[temp]=='o'||word[temp]=='u'){
                    um[word[temp]]--;
                }else{
                    count--;
                }
                temp--;
            }
            temp++;
            while(temp<=i){
                if(word[temp]=='a'||word[temp]=='e'||word[temp]=='i'||word[temp]=='o'||word[temp]=='u'){
                    um[word[temp]]++;
                }else{
                    count++;
                }
                temp++;
            }
        }

        while(count>k&&um['a']>0&&um['e']>0&&um['i']>0&&um['o']>0&&um['u']>0){
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                um[word[i]]--;
            }else{
                count--;
            }
            i++;
        }
        j++;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string w;
        int k;
        cin>>w>>k;
        cout<<countOfSubstrings(w,k)<<endl;
    }
    return 0;
}