#include<bits/stdc++.h>
using namespace std;

int maxi = -1000000000;

int maximum(int a[],int n){
	if(n<0) return a[0];
	maxi = max(maxi,a[n]);
	maximum(a,n-1);
	return maxi;
}


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	cout<<maximum(a,n-1);

	return 0;
}