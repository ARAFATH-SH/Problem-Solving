#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	long long sum_of_maximum_subarray = -1e18;
	long long sum = -1e18;
	for(int i = 0; i<n; i++){
		sum = max((long long)a[i],a[i]+sum);
		sum_of_maximum_subarray = max(sum,sum_of_maximum_subarray);
	}
	cout<<sum_of_maximum_subarray<<endl;

	return 0;
}