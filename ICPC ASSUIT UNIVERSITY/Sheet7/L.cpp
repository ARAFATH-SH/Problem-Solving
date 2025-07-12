#include<bits/stdc++.h>
using namespace std;

long long sum;

long long summ(int a[],long long n){
	if(n<0) return a[0];
	sum+=a[n];
	summ(a,n-1);
	return sum;
}


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	cout<<summ(a,n-1);

	return 0;
}