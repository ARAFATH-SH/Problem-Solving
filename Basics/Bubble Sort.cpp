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
		bool is_swap = false;
		for(int j=i+1; j<=n; j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
				is_swap = true;
			}
			cout<<"i ";
		}
		cout<<'\n';
		if(is_swap){
			is_swap = false;
		}
		else{
			break;
		}
	}

	for(int i=1; i<=n; i++){
		cout<<a[i]<<' ';
	}
	
	return 0;
}

//Time complexity : O(n^2)
//Space complexity : O(1)