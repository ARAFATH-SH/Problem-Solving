#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		long long int a[2*n-1];
		
		for(int i=0; i<n; i++){
			for(int j=0; j<=i; j++){
				cin>>a[j];
			}
		}
		for(int i=n-1; i>=1; i--){
			for(int j=0; j<i; j++){
				cin>>a[j];
			}
		}

	}
	
	return 0;
}