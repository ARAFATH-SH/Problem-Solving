#include<bits/stdc++.h>
using namespace std;

const int N =2e5+7;
int a[N];
int n,x;

bool products(long long int y){
	long long int sum = 0;
	// cout<<x<<'\n';
	for(int i=1; i<=n; i++){
		sum+= y/a[i];
		if(sum>=x) break;
	}
	return sum>=x;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n>>x;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	long long int l=1,r=1e18,ans=0;

	while(l<=r){
		// cout<<l <<' '<<r<<'\n';
		long long mid = (l+r)/2;
		if(products(mid)){
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	cout<<ans;
	
	return 0;
}