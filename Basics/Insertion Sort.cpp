#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	int a[n];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	for(int i=2; i<=n; i++){
		int j = i-1, key = a[i];
		while(j>=1 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}

	for(int i=1; i<=n; i++){
		cout<<a[i]<<' ';
	}

	return 0;
}

//Time complexity : O(n^2)
//Space complexity : O(1)