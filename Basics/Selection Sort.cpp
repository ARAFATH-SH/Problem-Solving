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

	for(int i=1; i<=n-1; i++){
		int min_index = i;
		for(int j=i+1; j<=n; j++){
			if(a[min_index]>a[j]){
				min_index = j;
			}
		}
		swap(a[i],a[min_index]);
	}

	for(int i=1; i<=n; i++){
		cout<<a[i]<<' ';
	}
	
	return 0;
}

//Time complexity : O(n^2)
//Space complexity : O(1)