
//Problem statement
// Given a sorted array a of n integers where each elements is either 0 or 1. Find the index 
// of the first 1 in the array. If there is no 1 present in the array, output -1.

#include<bits/stdc++.h>
using namespace std;

int a[105];

int Search(int l, int r){
	int ans = -1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid]==1){
			ans = mid;
			r = mid-1;
		}
		else l = mid+1;
	}
	return ans;
}

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	cout<<Search(1,n)<<'\n';

	return 0;
}