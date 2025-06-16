#include <bits/stdc++.h>
using namespace std;
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
int main()
{
    _test
    {
        int n;
        cin>>n;
        vector<ll int> a(n);
        for(auto &e: a)     cin>>e;
        ll int ans = -1e18, sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += a[i];
            ans = max(ans, sum);
            if(i<n && (max(a[i], -a[i]))%2 == (max(a[i+1], -a[i+1]))%2)
                sum=0;
            if(sum < 0)     sum = 0;
        }

        cout<<ans<<"\n";
    }
}