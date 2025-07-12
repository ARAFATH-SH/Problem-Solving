#include<bits/stdc++.h>
using namespace std;

int n,m,cont;

long long suffixSum(long long a[]){

	if(cont==m){
		return 0;
	}
	cont++;
	return a[--n]+suffixSum(a);
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n>>m;
	long long a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	cout<<suffixSum(a);

	return 0;
}