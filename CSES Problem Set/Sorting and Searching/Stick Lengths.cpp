#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	int a[n+1];

	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	sort(a+1,a+n+1);

	long long median = a[(n+1)/2],ans=0;

	for(int i=1; i<=n; i++){
		ans+=abs(a[i]-median);
	}

	cout<<ans<<'\n';
	
	return 0;
}