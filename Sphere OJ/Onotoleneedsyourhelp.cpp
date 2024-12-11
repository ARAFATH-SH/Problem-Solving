#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int one_integer = 0;
	for(int i=1; i<=n; i++){
		one_integer = one_integer ^ a[i];
	}
	
	cout<<one_integer<<'\n';

	return 0;
}