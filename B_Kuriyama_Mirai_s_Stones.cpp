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
#define LL "%I64d"
void solve(){
   
}
const int maxn=100010;
int n,m;
long long y[maxn],z[maxn];
int main(){
    // ios::sync_with_stdio(0); cin.tie(0);
    scanf("%d",&n);
	for (int a=1;a<=n;a++)
	{
		int v;
		scanf("%d",&v);
		y[a]=z[a]=v;
	}
	sort(y+1,y+n+1);
	for (int a=1;a<=n;a++)
		z[a]+=z[a-1],y[a]+=y[a-1];
	scanf("%d",&m);
	for (int a=1;a<=m;a++)
	{
		int opt,l,r;
		scanf("%d%d%d",&opt,&l,&r);
		if (opt==1) printf(LL "\n",z[r]-z[l-1]);
		else printf(LL "\n",y[r]-y[l-1]);
	}
}
