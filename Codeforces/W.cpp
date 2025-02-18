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
	int n,m; cin>>n>>m;
	int v[n][m];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>v[i][j];
		}
	}

	for(int i=0; i<n; i++){
		int start = 0, end = m-1;

		while(start<end){
			swap(v[i][start],v[i][end]);
			start++; end--;
		}

	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<v[i][j]<<' ';
		}
		cout<<'\n';
	}

	return 0;
}