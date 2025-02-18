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

	int n; cin>>n;

	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	
	sort(v.begin(),v.end());
	for(int i=0; i<n; i++){
		cout<<v[i]<<' ';
	}
	return 0;
}