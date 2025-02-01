#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int maxi = INT_MIN;

	for(int i=0; i<n; i++){
		maxi = max(maxi,a[i]);
	}

	cout<<maxi<<'\n';
	
	return 0;
}