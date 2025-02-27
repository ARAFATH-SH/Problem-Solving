#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int mask = 0; mask<(1<<n); mask++){ //2^n subsets. so we traverse 2^n-1 times.
		for(int i=0; i<n; i++){	
			if((mask>>i)&1){  //check if bit is on/off
				cout<<a[i]<<' ';
			}
		}
		cout<<'\n';
	}
	
	return 0;
}

// time complexity O(n*2^n);