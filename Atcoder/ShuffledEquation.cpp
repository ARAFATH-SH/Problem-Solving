#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int>v(3);
	for(int i=0; i<3; i++){
		cin>>v[i];
	}

	sort(v.begin(),v.end());

	do{
		if((v[0]*v[1])==v[2]){
			cout<<"Yes\n";
			return 0;
		}
	}while(next_permutation(v.begin(),v.end()));

	cout<<"No\n";

	
	return 0;
}