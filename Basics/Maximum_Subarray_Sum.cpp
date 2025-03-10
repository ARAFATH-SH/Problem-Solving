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

	//This approach is called brute force approach. Time complexity of the code is O(n^3).
	//If the number of operation is 10^18 then it takes 316.89 years.

	/*long long int ans = -1e18;
	for(int l=0; l<n; l++){
		for(int r=l; r<n; r++){
		long long int current_subarray_sum = 0;
			for(int i = l; i<=r; i++){
				current_subarray_sum+=a[i];
			}
		ans = max(ans,current_subarray_sum);
		}
	}*/


	//Suboptimal approach. Time complexity of the code is O(n^2).
	//If the number of operation is 10^18 then it takes  2.78 hours.

	/*long long int subarray_sum = -1e18;
	for(int l=0; l<n; l++){
		long long int current_subarray_sum = 0;
		for(int r=l; r<n; r++){
			current_subarray_sum+=a[r];
			subarray_sum = max(subarray_sum,current_subarray_sum);
		}
	}*/

	//This is the optimal solution. Time complexity of this code is O(n).
	//If the number of operation is 10^18 then it takes 0.01 seconds.

	long long int subarray_sum = -1e18;
	long long int current_subarray_sum = -1e18;
	for(int l=0; l<n; l++){
		current_subarray_sum = max((long long)a[l],current_subarray_sum+a[l]);
		subarray_sum = max(subarray_sum,current_subarray_sum);
		}

	cout<<subarray_sum<<'\n';
	return 0;
}