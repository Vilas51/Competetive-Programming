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
void solve()
{
    //    string s;
    //    cin>>s;
    //    int n=s.size();
    //    int count=0;
    //    int index=0;
    //    int j=0;
    //    bool flag=1;
    //    int count1=0;
    //    for(int i=0;i<n;i++){
    //     if(s[i]=='1'){
    //         count1++;
    //     }
    //    }
    //    if(count1==1&&s[0]=='1'){
    //     cout<<n<<endl;
    //     return;
    //    }
    //    for(int i=0;i<n;i++){
    //     if(s[i]=='0' && !flag){
    //         count+=i-j+1;
    //         j++;
    //     }
    //     else{
    //         if(flag && s[i]=='1'){
    //                 j=i;
    //                 flag=0;
    //         }
    //     }
    //    }
    //    cout<<count<<endl;
    // string s;
    // cin >> s;
    // int n = s.size();
    // int count = 0;
    // bool f = 0;
    // int j;
    // int i=0;
    // while(i<n)
    // {
    //     if (s[i] == '1'){
    //         for(j=i;j<n;j++){
    //             if(s[j]=='0'){
    //                 count+=j-i+1;
    //             }
    //         }
    //         i=j;
    //         continue;
    //     }
    //     i++;
    // }
    // cout<<count<<endl;
    string s;
    cin >> s;
    ll n = s.size();
    ll ans = 0;
    ll i = 0;
    ll count = 0;
    bool flag = 0;
    while (i < n)
    {
        if (s[i] == '1')
        {
            count++;
            flag = 1;
        }
        else
        {
            if (flag)
            {
                ans += count + 1;
            }
        }
        i++;
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
