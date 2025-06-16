#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<ll> req(n), av(n);
    // ll maxi=LLONG_MIN;
    for (ll i = 0; i < n; i++){
        cin >> req[i];
        // maxi=max(maxi,req[i]);
    }
    for (ll i = 0; i < n; i++){
        cin >> av[i];        
    }
    ll l=0;
	ll r = 4000000000;
	while(l+1!=r)
	{
		ll mid=(l+r)>>1;
		ll myneed=0;
		for(int i=0;i<n;i++)
		{
			if(myneed>k)break;
			myneed+=max(mid*req[i]-av[i],0ll);
		}
		if(myneed<=k)l=mid;
		else r=mid;
	}
    // if(l==137)l--;
	cout <<l<< endl;
    return 0;
}
