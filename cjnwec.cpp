#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	long long ans=0;
	for(int i=10;i<=n;i++){
		int curr=i;
		int currsum=0;
		while(curr>0){
			currsum+=curr%10;
			curr/=10;
		}
		if(currsum%4==0||currsum==10){
			ans+=i;
		}
	}
	cout<<ans<<endl;
}