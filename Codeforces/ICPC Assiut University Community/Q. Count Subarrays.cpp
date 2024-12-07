#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin >> n;
		int a[n+1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		int non_decreasing_subarray_count = 0;

		for(int i=0; i<n; i++){
			for(int j=i; j<n; j++){

				int is_non_decreasing_subarray = true;

				for(int r=i; r<j; r++){

					if(a[r]>a[r+1]){
						is_non_decreasing_subarray = false;
						break;
					}
				}

				if(is_non_decreasing_subarray){
					non_decreasing_subarray_count++;

				}
			}
		}
		cout<<non_decreasing_subarray_count<<endl;
	}
	return 0;
}