#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	long long sum=0; cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		sum = sum + 1ll*a[i];
	}
	
	cout<<(abs(sum))<<'\n';

	return 0;
}